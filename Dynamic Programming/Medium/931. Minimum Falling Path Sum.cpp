https://leetcode.com/problems/minimum-falling-path-sum/?envType=daily-question&envId=2024-01-19


class Solution {
public:

    // int minFallingPathSum(vector<vector<int>>& A) {
    // for (auto i = 1; i < A.size(); ++i)
    //     for (auto j = 0; j < A.size(); ++j)
    //     A[i][j] += min({ A[i-1][j], A[i-1][max(0,j-1)], A[i-1][min((int)A.size()-1,j+1)] });
    // return *min_element(begin(A[A.size() - 1]), end(A[A.size() - 1]));
    // }

    int minFallingPathSum(vector<vector<int>>& M) 
    {
        int m = M.size(), n = M[0].size();
        if(m == 1 || n == 1) return M[0][0];
        int ans = INT_MAX;
        vector<vector<int>> dp(m, vector<int>(n, INT_MAX));
        for(int i = 0; i<m; i++)
        {
            ans = min(ans, memo(M, 0, i, dp));
        }
        return ans;
    }

    int memo(vector<vector<int>>& M, int row, int col, vector<vector<int>> &dp)
    {
        int m = M.size(), n = M[0].size();

        if(dp[row][col] != INT_MAX) return dp[row][col];
        if(row == m - 1) return dp[row][col] = M[row][col];

        int left = INT_MAX, right = INT_MAX;

        if(col>0) left = memo(M, row+1, col-1, dp);
        int straight = memo(M, row+1, col, dp);
        if(col<n-1) right = memo(M, row+1, col+1, dp);

        dp[row][col] = min(left, min(straight, right)) + M[row][col];
        return dp[row][col];
    }
};
