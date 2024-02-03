https://leetcode.com/problems/partition-array-for-maximum-sum/?envType=daily-question&envId=2024-02-03


class Solution {
public:
    int sol(vector<int>& nums, int ind, int k, vector<int>& dp)
    {
        if(ind >= nums.size()) return 0;
        if(dp[ind] != -1) return dp[ind];
        int n = nums.size(), l = 0;
        int maxi = INT_MIN;
        int maxAns = INT_MIN;
        for(int i = ind; i<min(ind+k, n); i++)
        {
            l++;
            maxi = max(maxi, nums[i]);
            int sum = l * maxi + sol(nums, i + 1, k, dp);
            maxAns = max(maxAns, sum);
        }
        return dp[ind] = maxAns;
    }
    int maxSumAfterPartitioning(vector<int>& arr, int k) 
    {
        vector<int> dp(arr.size(), -1);
        return sol(arr, 0, k, dp);
    }
};
