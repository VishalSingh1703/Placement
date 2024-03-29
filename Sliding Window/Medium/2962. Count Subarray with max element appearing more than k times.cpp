https://leetcode.com/problems/count-subarrays-where-max-element-appears-at-least-k-times/?envType=daily-question&envId=2024-03-29


class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) 
    {
        if(k > nums.size()) return 0;
        int m = *max_element(nums.begin(), nums.end());
        int left = 0, right = 0, n = 0;
        long long count = 0;
        for(right = 0; right < nums.size(); right++)
        {
            if(nums[right] == m) n++;
            while(n == k)
            {
                if(nums[left++] == m) n--;
            }
            count += left;
        }
        return count;
    }
};
