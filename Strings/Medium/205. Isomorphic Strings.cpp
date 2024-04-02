https://leetcode.com/problems/isomorphic-strings/?envType=daily-question&envId=2024-04-02


class Solution {
public:
    bool isIsomorphic(string s, string t) 
    {
        map<char, char> freq1, freq2;
        if(s.size() != t.size()) return false;
        for(int i = 0; i<s.size(); i++)
        {
            if(freq1.find(s[i]) == freq1.end() && freq2.find(t[i]) == freq2.end()) {
                freq1[s[i]] = t[i];
                freq2[t[i]] = s[i];
            } else if(freq1[s[i]] != t[i] || freq2[t[i]] != s[i]) {
                return false;
            }
        }
        return true;
    }
};
