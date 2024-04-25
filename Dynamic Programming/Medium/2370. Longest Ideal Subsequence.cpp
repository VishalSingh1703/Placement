https://leetcode.com/problems/longest-ideal-subsequence/?envType=daily-question&envId=2024-04-25


class Solution {
public:
    int longestIdealString(string s, int k) {
        int dp[150] = {}, res = 0;
        for(auto &i : s) 
        {
            for(int j = i - k; j <= i + k; j++)
            {
                dp[i] = max(dp[i], dp[j]);
            }
            res = max(res, ++dp[i]);
        }
        return res;
    }
};
