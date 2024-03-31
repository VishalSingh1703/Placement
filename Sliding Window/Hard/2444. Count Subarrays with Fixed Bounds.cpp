https://leetcode.com/problems/count-subarrays-with-fixed-bounds/?envType=daily-question&envId=2024-03-31


class Solution {
public:
    long long countSubarrays(vector<int>& nums, int low, int high) 
    {
        int n = nums.size();
        int mn = -1, mx = -1, badi = -1;
        long long count = 0;
        for(int i = 0; i < n; i++)
        {
            if(nums[i] < low || nums[i] > high) badi = i;
            if(nums[i] == low) mn = i;
            if(nums[i] == high) mx = i;
            count += max(0, min(mn, mx) - badi);
        }
        return count;
    }
};
