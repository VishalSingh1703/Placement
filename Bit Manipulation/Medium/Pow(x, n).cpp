https://leetcode.com/problems/powx-n/


class Solution {
public:
    double myPow(double x, int n) {
        if(n<0) x = 1/x;

        long num = labs(n);
        double pow = 1;
        while(num)
        {
            if(num&1) // check if num is odd
            {
                pow *= x;
            }
            x *= x;
            num>>=1;
        }
        return pow;
    }
};
