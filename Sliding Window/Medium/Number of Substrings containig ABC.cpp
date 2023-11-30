https://leetcode.com/problems/number-of-substrings-containing-all-three-characters/


class Solution {
public:
    int numberOfSubstrings(string s) {
        vector<int> c(3, 0);
        int count = 0;
        int j = 0, i;
        for(i = 0; i<s.length(); i++)
        {
            c[s[i] - 'a']++;
            while(c[0] && c[1] && c[2]) c[s[j++] - 'a']--;
            count += j;
        }
        return count;
    }
};
