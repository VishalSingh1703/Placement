https://leetcode.com/problems/first-unique-character-in-a-string/?envType=daily-question&envId=2024-02-05


class Solution {
public:
    int firstUniqChar(string s) 
    {
        unordered_map<char, int> mp;
        for(char i : s) mp[i]++;
        for(int i = 0; i<s.length(); i++)
        {
            if(mp[s[i]] == 1) return i;
        }
        return -1;
    }
};
