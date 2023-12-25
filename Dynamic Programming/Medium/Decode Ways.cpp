https://leetcode.com/problems/decode-ways/?envType=daily-question&envId=2023-12-25


class Solution {
public:
        int numDecodings(string s) {
        int n = s.size();
        vector<int> dp(n+1);
        dp[n] = 1;
        for(int i=n-1;i>=0;i--) {
            if(s[i]=='0') dp[i]=0;
            else {
                dp[i] = dp[i+1];
                if(i<n-1 && (s[i]=='1'||s[i]=='2'&&s[i+1]<'7')) dp[i]+=dp[i+2];
            }
        }
        return s.empty()? 0 : dp[0];   
    }
};

// class Solution {
// public:
//     int numDecodings(string s) 
//     {
//         return s.empty() ? 0 : solve(0, s);
//     }

//     int solve(int i, string s)
//     {
//         int n = s.size();
//         if(i == n) return 1;
//         if(s[i] == '0') return 0;
//         int res = solve(i+1, s);
//         if(i < n-1 && (s[i] == '1' || (s[i] == '2' && s[i+1]<'7'))) res += solve(i+2, s);
//         return res;
//     }
// };
