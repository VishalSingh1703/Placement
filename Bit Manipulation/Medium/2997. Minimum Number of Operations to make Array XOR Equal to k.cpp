https://leetcode.com/problems/minimum-number-of-operations-to-make-array-xor-equal-to-k/description/?envType=daily-question&envId=2024-04-29


class Solution {
public:
    int minOperations(vector<int>& nums, int k) 
    {
        int org = 0, ans = 0;
        for(auto i : nums) org ^= i;
        org ^= k;
        while(org > 0)
        {
            ans += org % 2;
            org >>= 1;
        }
        return ans;
    }
};
