https://leetcode.com/problems/largest-substring-between-two-equal-characters/?envType=daily-question&envId=2023-12-31


class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {
        unordered_map<char, int> freq;
        int count = 0;
        bool flag = false;
        for(int i = 0; i<s.length(); i++)
        {
            if(freq.count(s[i])>0)
            {
                count = max(count, i - freq[s[i]] - 1);
                flag = true;
            }
            else freq[s[i]] = i;
        }
        return !flag ? -1 : count;
    }
};
