https://leetcode.com/problems/jump-game/


class Solution {
public:
    bool canJump(vector<int>& nums) 
    {
        int n = nums.size() - 1;
        int reach = 0;
        int i = 0;
        for(; i<n && i<=reach && reach<n; i++) reach = max(reach, i + nums[i]);
        return reach>=n;
    }
};
