https://leetcode.com/problems/largest-local-values-in-a-matrix/?envType=daily-question&envId=2024-05-12


class Solution {
public:

    int solve(vector<vector<int>> &grid, int m, int n)
    {
        int mx = 0;
        for(int i = m; i < m + 3; i++)
        {
            for(int j = n; j < n + 3; j++) mx = max(mx, grid[i][j]);
        }
        return mx;
    }

    vector<vector<int>> largestLocal(vector<vector<int>>& grid) 
    {
        int m = grid.size(), n = grid[0].size();
        vector<vector<int>> ans(m - 2, vector<int>(n - 2));
        for(int i = 0; i < m - 2; i++)
        {
            for(int j = 0; j < n - 2; j++)
            {
                ans[i][j] = solve(grid, i, j);
            }
        }
        return ans;
    }
};
