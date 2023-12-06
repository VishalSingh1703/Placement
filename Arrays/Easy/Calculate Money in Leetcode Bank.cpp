https://leetcode.com/problems/calculate-money-in-leetcode-bank/?envType=daily-question&envId=2023-12-06


class Solution {
public:
    int totalMoney(int n) {
        int weeks = n/7;
        int res = 0;
        for(int i=1; i<=weeks; i++)
        {
            res += 7*(i+3);
        }
        
        for(int i = 7*weeks; i<n; i++)
        {
            res += ++weeks;
        }
        return res;
    }
};
