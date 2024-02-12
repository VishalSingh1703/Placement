https://leetcode.com/problems/is-subsequence/?envType=daily-question&envId=2024-02-12


class Solution {
public:
    bool isSubsequence(string s, string t) 
    {
        int i = 0, j = 0;
        while(i<s.length() && j<t.length())
        {
            if(s[i] == t[j]) i++, j++;
            else j++;
        }
        return i == s.length();
    }
};
