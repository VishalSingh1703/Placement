https://leetcode.com/problems/diagonal-traverse-ii/?envType=daily-question&envId=2023-11-22


class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& nums) {
        vector<int> ans;
        unordered_map<int, vector<int>> m;
        int maxKey = 0;
        for(int i = 0; i<nums.size(); i++)
        {
            for(int j = 0; j<nums[i].size(); j++)
            {
                m[i+j].push_back(nums[i][j]);
                maxKey = max(maxKey, i+j);
            }
        }
        for(int i = 0; i<=maxKey; i++)
        {
            for(auto x = m[i].rbegin(); x != m[i].rend(); x++)
            {
                ans.push_back(*x);
            }
        }
        return ans;
    }
};
