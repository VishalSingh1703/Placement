https://leetcode.com/problems/palindromic-substrings/?envType=daily-question&envId=2024-02-10


class Solution {
public:
    int c = 0;
    int countSubstrings(string s) 
    {
        for(int i = 0; i<s.length(); i++)
        {
            check(s, i, i);
            check(s, i, i+1);
        }
        return c;
    }
    void check(string s, int left, int right)
    {
        while(left>=0 && right<s.length() && s[left] == s[right])
        {
            c++;
            left--;
            right++;
        }
    }
};
