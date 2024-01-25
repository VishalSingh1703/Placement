https://leetcode.com/problems/longest-common-subsequence/?envType=daily-question&envId=2024-01-25


// class Solution {  // Using Recursion
// public:
//     int f(string &t1, int i, string &t2, int j)
//     {
//         if(i<0 || j<0) return 0;
//         if(t1[i] == t2[j]) return 1 + f(t1, i-1, t2, j-1);
//         return max(f(t1, i-1, t2, j), f(t1, i, t2, j-1));
//     }

//     int longestCommonSubsequence(string text1, string text2) 
//     {
//         return f(text1, text1.size()-1, text2, text2.size()-1);
//     }
// };

class Solution {         // Using Memoization
public:
    int f(string &t1, int i, string &t2, int j, vector<vector<int>> &dp)
    {
        if(i<0 || j<0) return 0;
        if(dp[i][j] != -1) return dp[i][j];
        if(t1[i] == t2[j]) return dp[i][j] = 1 + f(t1, i-1, t2, j-1, dp);
        return dp[i][j] = max(f(t1, i-1, t2, j, dp), f(t1, i, t2, j-1, dp));
    }

    int longestCommonSubsequence(string text1, string text2) 
    {
        vector<vector<int>> dp(text1.size(), vector<int>(text2.size(), -1));
        return f(text1, text1.size()-1, text2, text2.size()-1, dp);
    }
};
