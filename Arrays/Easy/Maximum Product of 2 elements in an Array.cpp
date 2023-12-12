https://leetcode.com/problems/maximum-product-of-two-elements-in-an-array/?envType=daily-question&envId=2023-12-12


class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int m = 0, n = 0;
        for(auto num : nums)
        {
            int temp = max(num, min(m, n));
            n = max(m, n);
            m = temp;
        }
        return (m-1) * (n-1);
    }
};
