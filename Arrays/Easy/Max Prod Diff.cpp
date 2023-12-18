https://leetcode.com/problems/maximum-product-difference-between-two-pairs/?envType=daily-question&envId=2023-12-18


class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        int a = INT_MAX, b = INT_MAX, c = INT_MIN, d = INT_MIN;
        for(int i : nums)
        {
            if(i<a || i<b)
            {
                b = min(a, b);
                a = i;
            }
            if(i>c || i>d)
            {
                d = max(c, d);
                c = i;
            }
        }
        return (c*d) - (a*b);
    }
};
