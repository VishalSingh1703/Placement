https://leetcode.com/problems/consecutive-characters/

class Solution {
public:
    int maxPower(string s) {
        int count = 1;
        int ans = 1;
        for(int i = 1; i<s.length(); i++)
        {
            if(s[i-1]==s[i])
            {
                count++;
                ans = max(ans, count);
            }
            else count = 1;
        }
        return ans;
    }
};
