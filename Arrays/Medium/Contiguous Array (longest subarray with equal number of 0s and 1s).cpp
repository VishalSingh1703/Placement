https://leetcode.com/problems/contiguous-array/description/


class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int sum = 0, maxlen = 0;
        unordered_map<int, int> seen{{sum, -1}};
        for(int i = 0; i<nums.size(); i++)
        {
            sum += (nums[i] == 1)? 1:-1;
            if(seen.count(sum)) maxlen = max(maxlen, i-seen[sum]);
            else seen[sum] = i;
        }
        return maxlen;
    }
};
