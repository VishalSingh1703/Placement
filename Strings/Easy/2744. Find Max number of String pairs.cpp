https://leetcode.com/problems/find-maximum-number-of-string-pairs/


class Solution {
public:
    int maximumNumberOfStringPairs(vector<string>& words) {
        int vis[676] = {}, count = 0;
        for(string word : words)
        {
            count += vis[(word[0] - 'a') * 26 + (word[1] - 'a')];
            vis[(word[1] - 'a') * 26 + (word[0] - 'a')] = true;
        }
        return count;
    }
};
