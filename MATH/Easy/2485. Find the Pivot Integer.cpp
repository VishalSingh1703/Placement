https://leetcode.com/problems/find-the-pivot-integer/?envType=daily-question&envId=2024-03-13


class Solution {
public:
    int pivotInteger(int n) {
        if(n == 1) return 1;
        int sum = 0, prefix = 0;
        sum = (n * (n + 1))/2;
        for(int i = 1; i <= n; i++)
        {
            prefix += i; sum -= i-1;
            if(prefix == sum) return i;
        }
        return -1;
    }
};


// Also check:
https://leetcode.com/problems/find-the-pivot-integer/solutions/4866463/beat-100-full-explanation-with-pictures
