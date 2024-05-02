https://leetcode.com/problems/largest-positive-integer-that-exists-with-its-negative/submissions/1246956488/


class Solution {
public:
    int findMaxK(vector<int>& nums) 
    {
        sort(nums.begin(), nums.end());
        int i = 0, j = nums.size() - 1;
        while(i < j)
        {
            int a = -nums[i], b = nums[j];
            if(a == b) return b;
            else if(a > b) i++;
            else j--;
        }
        return -1;
    }
};
