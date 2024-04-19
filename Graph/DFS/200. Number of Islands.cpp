https://leetcode.com/problems/number-of-islands/?envType=daily-question&envId=2024-04-19


class Solution {
public:

    int move[5] = {-1, 0, 1, 0, -1};

    int numIslands(vector<vector<char>>& grid) 
    {
        int islands = 0;
        int m = grid.size();
        int n = grid[0].size();
        vector<vector<int>> vis(m, vector<int>(n, 0));

        for(int i = 0; i < m; i++)
        {
            for(int j = 0; j < n; j++)
            {
                if(grid[i][j] == '1' && vis[i][j] == 0)
                {
                    islands++;
                    dfs(i, j, m, n, grid, vis);
                }
            }
        }
        return islands;
    }

    void dfs(int i, int j, int m, int n, vector<vector<char>> &grid, vector<vector<int>> &vis)
    {
        if(i < 0 || j < 0 || i >= m || j >= n || grid[i][j] != '1' || vis[i][j] == 1) return;
        vis[i][j] = 1;
        for(int it = 0; it < 4; it++) 
        {
            int ni = i + move[it];
            int nj = j + move[it+1];
            if(ni >= 0 && nj >= 0 && ni < m && nj < n && grid[ni][nj] == '1' && vis[ni][nj] == 0) dfs(ni, nj, m, n, grid, vis);
        }
    }
};
