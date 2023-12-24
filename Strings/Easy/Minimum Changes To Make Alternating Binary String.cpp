https://leetcode.com/problems/minimum-changes-to-make-alternating-binary-string/?envType=daily-question&envId=2023-12-24


class Solution {
public:
    int minOperations(string s) {
        int res = 0, n = s.length();
        for(int i = 0; i<n; i++)
        {
            if(s[i] - '0' != i%2) res++;
        }
        return min(res, n-res);
    }
};
