https://leetcode.com/problems/sum-of-absolute-differences-in-a-sorted-array/description/?envType=daily-question&envId=2023-11-25

class Solution {
public:
    vector<int> getSumAbsoluteDifferences(vector<int>& nums) {
        int totalSum = 0, leftSum = 0, n = nums.size();
        for(auto i:nums) totalSum += i;
        vector<int> ans;

        for(int i  = 0; i<n; i++)
        {
            int sumLeft = (nums[i] * i) - leftSum;
            int sumRight = (totalSum - leftSum - nums[i]*(n-i));
            leftSum += nums[i];
            ans.push_back(sumLeft + sumRight);
        }
        return ans;
    }
};
