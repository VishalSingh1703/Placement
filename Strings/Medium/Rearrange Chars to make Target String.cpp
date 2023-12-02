https://leetcode.com/problems/rearrange-characters-to-make-target-string/


class Solution {
public:
    int rearrangeCharacters(string s, string target) {
        vector<int> freq(26, 0), targ(26, 0);
        for(char c:s) freq[c - 'a']++;
        for(char i:target) targ[i - 'a']++;
        
        int mn = s.size();
        for(char i:target)
        {
            if(targ[i - 'a']>0) mn = min(mn, freq[i - 'a']/targ[i - 'a']);
        }
        return mn;
    }
};
