https://leetcode.com/problems/longest-increasing-subsequence/?envType=daily-question&envId=2024-01-05


class Solution {
public:
    int lengthOfLIS(vector<int>& nums) 
    {
        vector<int> ans;
        for(int i : nums)
        {
            if(ans.empty() || ans.back()<i) ans.push_back(i);
            else
            {
                auto it = lower_bound(ans.begin(), ans.end(), i);
                *it = i;
            }
        }
        return ans.size();
    }
};
