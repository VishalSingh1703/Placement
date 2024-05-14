https://leetcode.com/problems/path-with-maximum-gold/?envType=daily-question&envId=2024-05-14


class Solution {
public:

    int dir[5] = {-1, 0, 1, 0, -1};

    void dfs(int i, int j, vector<vector<int>>& grid, vector<vector<int>>& vis, int& maxGold, int gold)
    {
        int m = grid.size(), n = grid[0].size();
        if(i < 0 || j < 0 || i >= m || j >= n || grid[i][j] == 0 || vis[i][j] == 1) return;
        vis[i][j] = 1;
        gold += grid[i][j];
        maxGold = max(maxGold, gold);
        for(int it = 0; it < 4; it++) dfs(i + dir[it], j + dir[it + 1], grid, vis, maxGold, gold);
        vis[i][j] = 0;
    }

    int getMaximumGold(vector<vector<int>>& grid) 
    {
        int sum = 0, m = grid.size(), n = grid[0].size();
        vector<vector<int>> vis(m, vector<int>(n, 0));
        for(int i = 0; i < m; i++)
        {
            for(int j = 0; j < n; j++)
            {
                dfs(i, j, grid, vis, sum, 0);
            }
        }
        return sum;
    }
};
