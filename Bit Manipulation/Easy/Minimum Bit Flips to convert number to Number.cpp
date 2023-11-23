https://leetcode.com/problems/minimum-bit-flips-to-convert-number/


class Solution {
public:
    int minBitFlips(int start, int goal) 
    {
        int count = 0;
        while(max(start, goal)!=0)
        {
            if (((start&1)^(goal&1)) == 1) count++;
            start>>=1;
            goal>>=1;
        }
        return count;

        // return __builtin_popcount(start^goal);      This is a built in function
    }
};
