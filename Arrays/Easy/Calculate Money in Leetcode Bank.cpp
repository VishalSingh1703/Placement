https://leetcode.com/problems/calculate-money-in-leetcode-bank/?envType=daily-question&envId=2023-12-06


class Solution {
public:
    int totalMoney(int n) {
        int a = 0;
        int output = 0;
        for(int i = 0; i<n; i++)
        {
            if(i%7 == 0) a = i/7 + 1; // gives the numnber of weeks
            output += a + i%7; // adds the weeks to the number of days,
        }
        return output;
    }
};
