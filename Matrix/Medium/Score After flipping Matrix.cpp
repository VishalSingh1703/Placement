https://leetcode.com/problems/score-after-flipping-matrix/?envType=daily-question&envId=2024-05-13


// Optimal Solution
class Solution {
public:
    int matrixScore(vector<vector<int>>& grid) 
    {
        int m = grid.size(), n = grid[0].size(), ans = m * (1 << (n - 1));
        for(int j = 1; j < n; j++)
        {
            int count = 0;
            for(int i = 0; i < m; i++) count += grid[i][j] == grid[i][0];
            ans += max(count, m - count) * (1 << (n - j - 1));
        }
        return ans;
    }
};



// Brute Force
class Solution {
public:

    void invertRow(int i, vector<vector<int>>& grid)
    {
        int n = grid[0].size();
        for(int it = 0; it < n; it++) grid[i][it] = !grid[i][it];
    }

    void invertCol(int j, vector<vector<int>>& grid)
    {
        int m = grid.size();
        for(int it = 0; it < m; it++) grid[it][j] = !grid[it][j];
    }

    int countOne(int j, vector<vector<int>>& grid)
    {
        int count = 0, m = grid.size();
        for(int it = 0; it < m; it++) count += grid[it][j];
        return count;
    }

    int matrixScore(vector<vector<int>>& grid) 
    {
        int m = grid.size(), n = grid[0].size(), ans = 0;
        for(int i = 0; i < m; i++) if(grid[i][0] == 0) invertRow(i, grid);
        for(int j = 1; j < n; j++) if(countOne(j, grid) <= (m / 2)) invertCol(j, grid);
        for(int i = 0; i < m; i++)
        {
            for(int j = 0; j < n; j++)
            {
                // cout << grid[i][j] << " ";
                ans += grid[i][j] * pow(2, (n - 1) - j);
                // cout << grid[i][j] * pow(2, (n - 1) - j) << " ";
            }
            cout << ans << endl;
        }
        return ans;
    }
};
