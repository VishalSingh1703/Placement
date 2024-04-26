https://leetcode.com/problems/minimum-falling-path-sum-ii/?envType=daily-question&envId=2024-04-26


class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& grid) 
    {
        int m = grid.size();
        vector<int> prev = grid[0], curr = grid[0];
        for(int i = 1; i < m; i++)
        {
            int first = INT_MAX, second = INT_MAX;
            for(int j = 0; j < m; j++)
            {
                if(prev[j] < first) { second = first; first = prev[j]; }
                else if(prev[j] < second) second = prev[j];
            }
            for(int j = 0; j < m; j++)
            {
                curr[j] = grid[i][j] + (prev[j] == first ? second : first);
            }
            prev = curr;
        }
        int ans = INT_MAX;
        for(int i = 0; i < m; i++) ans = min(ans, prev[i]);
        return ans;
    }
};
