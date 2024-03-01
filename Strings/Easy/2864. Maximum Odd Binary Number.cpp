https://leetcode.com/problems/maximum-odd-binary-number/?envType=daily-question&envId=2024-03-01


class Solution {
public:
    string maximumOddBinaryNumber(string s) 
    {
        int l = s.length();
        int ones = 0;
        for(char i : s) if( i == '1') ones++;
        int zeros = l - ones;
        string ans = "";

        // for(int i = 0; i<l; i++)
        // {
        //     if((i != l-1 && countOnes > 1) || (i == l-1 && countOnes-- == 1)) {ans += '1'; countOnes--;}
        //     else ans += '0';
        // }
        // return ans;

        while(ones-- > 1) ans += '1';
        while(zeros-- > 0) ans += '0';
        ans += '1';
        return ans;
    }
};
