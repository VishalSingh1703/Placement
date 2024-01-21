https://leetcode.com/problems/house-robber/?envType=daily-question&envId=2024-01-21


class Solution {
public:
    int fun(vector<int>& nums, int ind, vector<int>& dp)
    {
        if(ind<0) return 0;
        if(ind == 0) return nums[ind];

        if(dp[ind] != -1) return dp[ind];

        int pick = nums[ind] + fun(nums, ind-2, dp);
        int notPick = fun(nums, ind-1, dp);
        return dp[ind] = max(pick, notPick);
    }
    int rob(vector<int>& nums) 
    {
        int n = nums.size();
        vector<int> dp(n, -1);
        return fun(nums, n-1, dp);
    }
};
