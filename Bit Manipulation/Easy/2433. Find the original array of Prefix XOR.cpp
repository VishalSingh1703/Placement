https://leetcode.com/problems/find-the-original-array-of-prefix-xor/


class Solution {
public:
    vector<int> findArray(vector<int>& pref) 
    {
        vector<int> ans(pref.size(), 0);
        for(int i = 0; i < pref.size(); i++)
        {
            if(i == 0) { ans[i] = pref[i]; continue; }
            ans[i] = pref[i] ^ pref[i - 1];
        }
        return ans;
    }
};
