https://leetcode.com/problems/transpose-matrix/?envType=daily-question&envId=2023-12-10


class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int a = matrix.size(), b = matrix[0].size();
        vector<vector<int>> ans(b, vector<int>(a, 0));
        for(int j = 0; j<b; j++)
        {
            for(int i = 0; i<a; i++)
            {
                ans[j][i] = matrix[i][j];
            }
        }
        return ans;
    }
};
