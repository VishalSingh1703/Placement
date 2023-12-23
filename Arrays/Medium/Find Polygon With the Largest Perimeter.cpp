https://leetcode.com/problems/find-polygon-with-the-largest-perimeter/


class Solution {
public:
    long long largestPerimeter(vector<int>& nums) {
        if(nums.size()<3) return -1;
        sort(nums.begin(), nums.end());
        long long sum = 0;
        for(int i:nums) sum += i;
        for(int i = nums.size()-1; i>=0; i--)
        {
            if(nums[i]<(sum-nums[i])) break;
            sum -= nums[i];
        }
        return sum ? sum : -1;
    }
};
