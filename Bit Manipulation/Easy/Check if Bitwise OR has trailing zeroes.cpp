https://leetcode.com/problems/check-if-bitwise-or-has-trailing-zeros/


class Solution {
public:
    // bool hasTrailingZeros(vector<int>& nums) 
    // {
    //     int num1 = -1, num2 = -1;
    //     for(int i = 0; i<nums.size(); i++)
    //     {
    //         if(nums[i]%2 == 0)
    //         {
    //             if(num1 == -1) num1 = nums[i];
    //             else if(num1 !=-1 && num2 == -1) num2 = nums[i];
    //             if(num1!=-1 && num2!=-1) return true;
    //         }
    //     }
    //     return false;
    // }
    bool hasTrailingZeros(vector<int>& nums) 
    {
        int even = 0;
        for(auto n: nums) even += ((n%2)?0:1);
        return (even >= 2);
    }
};
