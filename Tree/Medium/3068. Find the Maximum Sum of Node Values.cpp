https://leetcode.com/problems/find-the-maximum-sum-of-node-values/?envType=daily-question&envId=2024-05-19


class Solution {
public:
    long long maximumValueSum(vector<int>& nums, int k, vector<vector<int>>& edges) 
    {
        // long long ans = 0;
        // for(int i : nums) ans += i;

        // vector<int> delta(nums.size(), 0);
        // for(int i = 0; i < nums.size(); i++) delta[i] = (nums[i] ^ k) - nums[i];

        // sort(delta.begin(), delta.end(), greater<int>());
        // for(int i : delta) cout << i << " ";

        // for(int i = 0; i < delta.size(); i += 2)
        // {
        //     if(i + 1 > delta.size() - 1) return ans;
        //     int sum = delta[i] + delta[i + 1];
        //     if(sum > 0) ans += sum;
        // }
        // return ans;




        long long sum = 0, cnt = 0;
        int sac = INT_MAX;
        for(int i : nums)
        {
            sum += max(i, i ^ k);
            cnt += (i ^ k) > i;
            sac = min(sac, abs(i - (i ^ k)));
        }
        return sum - (cnt % 2 ? sac : 0);
    }
};
