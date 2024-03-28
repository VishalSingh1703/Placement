https://leetcode.com/problems/length-of-longest-subarray-with-at-most-k-frequency/?envType=daily-question&envId=2024-03-28


class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) 
    {
        int n = nums.size();
        unordered_map<int, int> freq;
        int longest = 0, left = 0;
        for(int right = 0; right < n; right++)
        {
            freq[nums[right]]++;
            while(freq[nums[right]] > k && left <= right) freq[nums[left++]]--;
            longest = max(longest, right - left + 1);
        }
        return longest;
    }
};
