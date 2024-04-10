https://leetcode.com/problems/reveal-cards-in-increasing-order/?envType=daily-question&envId=2024-04-10


class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& deck) 
    {
        queue<int> q;
        int n = deck.size();
        sort(deck.begin(), deck.end());
        for(int i = 0; i < n; i++) q.push(i);    
        vector<int> ans(n, 0);
        int i = 0;
        while(!q.empty())
        {
            ans[q.front()] = deck[i++];
            q.pop();
            q.push(q.front());
            q.pop();
        }
        return ans;
    }
};
