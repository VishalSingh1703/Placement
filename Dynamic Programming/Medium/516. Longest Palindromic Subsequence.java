https://leetcode.com/problems/longest-palindromic-subsequence/


class Solution {
    int solve(int start, int end, String s, Integer[][] dp)
    {
        if(start > end) return 0;
        if(start == end) return 1;
        if(dp[start][end] != null) return dp[start][end];
        if(s.charAt(start) == s.charAt(end)) return dp[start][end] = 2 + solve(start + 1, end - 1, s, dp);
        else return dp[start][end] = Math.max(solve(start + 1, end, s, dp), solve(start, end - 1, s, dp));
    }

    public int longestPalindromeSubseq(String s) 
    {
        Integer dp[][] = new Integer[s.length()][s.length()];
        return solve(0, s.length() - 1, s, dp);
    }
}
