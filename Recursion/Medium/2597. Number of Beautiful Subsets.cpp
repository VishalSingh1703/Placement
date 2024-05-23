https://leetcode.com/problems/the-number-of-beautiful-subsets/?envType=daily-question&envId=2024-05-23


class Solution {

    int countBeauty(vector<int> &nums, int diff, unordered_map<int, int> &freq, int i)
    {
        if(i == nums.size()) return 1;
        int totalCount = countBeauty(nums, diff, freq, i + 1);
        if(!freq[nums[i] - diff])
        {
            freq[nums[i]]++;
            totalCount += countBeauty(nums, diff, freq, i + 1);
            freq[nums[i]]--;
        }
        return totalCount;
    }

public:
    int beautifulSubsets(vector<int>& nums, int k) 
    {
        unordered_map<int, int> freqMap;
        sort(nums.begin(), nums.end());
        return countBeauty(nums, k, freqMap, 0) - 1;
    }
};
