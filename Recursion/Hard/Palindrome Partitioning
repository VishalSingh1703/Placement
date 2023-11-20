https://leetcode.com/problems/palindrome-partitioning/


class Solution {
public:
    bool isPal(string s)
    {
        if(s.size() == 0 || s.size() == 1) return true;
        return (s[0] == s[s.length() - 1]) ? isPal(s.substr(1, s.length()-2)) : false;
    }

    void permute(int index, string s, vector<string> &cand, vector<vector<string>> &ans)
    {
        if(index == s.size())
        {
            ans.push_back(cand);
            return;
        }
        for(int i = index; i<s.size(); i++)
        {
            if(isPal(s.substr(index, i - index + 1)))
            {
                cand.push_back(s.substr(index, i - index + 1));
                permute(i + 1, s, cand, ans);
                cand.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string s) {
        vector<vector<string>> ans;
        vector<string> cand;
        permute(0, s, cand, ans);
        return ans;
    }
};
