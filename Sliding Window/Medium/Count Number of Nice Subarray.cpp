https://leetcode.com/problems/count-number-of-nice-subarrays/


class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) 
    {
        return atMost(nums, k) - atMost(nums, k - 1);
    }

    int atMost(vector<int> &nums, int k)
    {
        int res = 0, i = 0, n = nums.size();
        for(int j = 0; j<n; j++)
        {
            k -= nums[j]%2;
            while(k<0) k += nums[i++]%2;
            res += j - i + 1;
        }
        return res;
    }
};
