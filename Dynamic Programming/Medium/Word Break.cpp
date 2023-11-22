https://leetcode.com/problems/word-break/submissions/1104041076/


class Solution {
    int dp[301];
public:
    bool solve(int index, string s, set<string> &st)
    {
        if(index == s.length()) return 1;
        if(dp[index]!=-1) return dp[index];
        string temp = "";
        for(int i = index; i<s.size(); i++)
        {
            temp += s[i];
            if(st.find(temp)!=st.end()) 
            {
                if(solve(i + 1, s, st)) return dp[index] = 1;
            }
        }
        return dp[index] = 0;
    }
    bool wordBreak(string s, vector<string>& wordDict) {
        memset(dp, -1, sizeof(dp));
        set<string> st;
        for(auto i:wordDict) st.insert(i);
        return solve(0, s, st);
    }
};
