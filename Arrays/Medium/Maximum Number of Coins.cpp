https://leetcode.com/problems/maximum-number-of-coins-you-can-get/?envType=daily-question&envId=2023-11-24


class Solution {
public:
    int maxCoins(vector<int>& piles) {
        sort(piles.begin(), piles.end());
        int sum = 0;
        int n = piles.size();
        for(int i = n/3; i<n; i+=2)
        {
            sum += piles[i];
        }
        return sum;
    }
};
