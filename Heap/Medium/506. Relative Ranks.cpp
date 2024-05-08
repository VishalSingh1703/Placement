https://leetcode.com/problems/relative-ranks/description/?envType=daily-question&envId=2024-05-08


class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) 
    {
        int count = 1;
        vector<string> ans(score.size(), "");
        priority_queue<pair<int, int>> pq;
        for(int i = 0; i < score.size(); i++) pq.push(make_pair(score[i], i));
        for(int i = 0; i < score.size(); i++)
        {
            if(count == 1) { ans[pq.top().second] = "Gold Medal"; count++; }
            else if(count == 2) { ans[pq.top().second] = "Silver Medal"; count++; }
            else if(count == 3) { ans[pq.top().second] = "Bronze Medal"; count++; }
            else { ans[pq.top().second] = to_string(count); count++; }
            pq.pop();
        }
        return ans;
    }
};
