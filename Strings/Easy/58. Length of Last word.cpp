https://leetcode.com/problems/length-of-last-word/


class Solution {
public:
    int lengthOfLastWord(string s) 
    {
        reverse(s.begin(), s.end());
        int count = 0;
        for(char c : s) { if(c != ' ') count++; else if(count>0) return count; }
        return count;
    }
};
