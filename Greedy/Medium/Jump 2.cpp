https://leetcode.com/problems/jump-game-ii/


class Solution {
public:
    int jump(vector<int>& nums) 
    {
        int n = nums.size(), step = 0, start = 0, end = 0;
        while(end<n - 1)
        {
            step++;
            int maxEnd = end + 1;
            for(int i = start; i<=end; i++)
            {
                if(i + nums[i] >= n - 1) return step;
                maxEnd = max(maxEnd, i + nums[i]);
            }
            start = end + 1;
            end = maxEnd;
        }
        return step;
    }
};
