https://leetcode.com/problems/count-good-numbers/


class Solution {
public:
    int m = 1e9 + 7;
    long long power(long long x, long long y)
    {
        long long res = 1;
        x %= m;
        if(x == 0) return 0;
        while(y>0)
        {
            if(y & 1) res = (res*x)%m;
            y /= 2;
            x = (x*x)%m;
        }
        return res;
    }
    int countGoodNumbers(long long n) 
    {
        long long count_4s = n/2;
        long long count_5s = n - count_4s;
        long long ans = (power(4LL, count_4s)%m * power(5LL, count_5s)%m)%m;
        return ans;
    }
};
