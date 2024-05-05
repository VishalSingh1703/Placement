https://leetcode.com/problems/count-number-of-pairs-with-absolute-difference-k/


class Solution {
public:
    // int countKDifference(vector<int>& nums, int k) 
    // {
    //     int count = 0;
    //     for(int i = 0; i < nums.size(); i++)
    //     {
    //         for(int j = i + 1; j < nums.size(); j++)
    //         {
    //             if(labs(nums[i] - nums[j]) == k) count++;
    //         }
    //     }
    //     return count;
    // }
    int countKDifference(vector<int>& nums, int k) 
    {
        unordered_map<int, int> freq;
        int count = 0;
        for(int i : nums) freq[i]++;
        for(int i : nums)
        {
            int key = i + k;
            if(freq.find(key) != freq.end()) count += freq[key];
        }
        return count;
    }
};
