https://leetcode.com/problems/number-of-enclaves/


class Solution {
public:
    vector<int> move = {-1, 0, 1, 0, -1};
    void dfs(int i, int j, int m, int n, vector<vector<int>>& grid)
    {
        if(i<0 || i>=m || j<0 || j>=n || grid[i][j] != 1) return;
        grid[i][j] = 0;
        for(int it = 0; it<4; it++) dfs(i+move[it], j+move[it+1], m, n, grid);
    }

    int numEnclaves(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        int count = 0;
        if(m==1 || n == 1) return count;
        for(int i = 0; i<m; i++)
        {
            for(int j = 0; j<n; j++)
            {
                if(i*j == 0 || i == m-1 || j == n-1) dfs(i, j, m, n, grid);
            }
        }
        
        for(int i = 0; i<m; i++)
        {
            for(int j = 0; j<n; j++)
            {
                if(grid[i][j]) count++;
            }
        }
        return count;
    }
};
