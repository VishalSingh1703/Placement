https://leetcode.com/problems/subarray-product-less-than-k/


class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) 
    {
        if(k <= 1) return 0;
        int n = nums.size(), prod = 1, count = 0, left = 0;
        for(int right = 0; right < n; right++)
        {
            prod *= nums[right];
            while(prod >= k && left < n) prod /= nums[left++];
            count += right - left + 1;
        }
        return count > 0 ?  count : 0;
    }
};
