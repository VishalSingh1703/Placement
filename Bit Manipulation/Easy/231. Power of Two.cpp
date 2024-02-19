https://leetcode.com/problems/power-of-two/


class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n<=0) return false;
        double t = log2(n);
        cout<< t << " " << floor(t);
        if(floor(t) == t) return true;
        return false;
    }
};

// class Solution {
// public:
//     bool isPowerOfTwo(int n) {
//         if(n<=0) return false;
//         return ((n & n-1) == 0);
//     }
// };
