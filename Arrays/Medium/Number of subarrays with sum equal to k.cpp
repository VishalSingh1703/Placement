https://leetcode.com/problems/subarray-sum-equals-k/description/


class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        int presum = 0, count = 0, remain = 0;
        mp[0] = 1;
        for(auto it : nums)
        {
            presum += it;
            remain = presum - k;
            count += mp[remain];
            mp[presum]++;
        }
        return count;
    }
};
