https://leetcode.com/problems/create-target-array-in-the-given-order/


const int ZERO = []()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	return 0;
}();
#pragma GCC optimize("O3", "unroll-loops")

class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) 
    {
        vector<int> ans;
        for(int i = 0; i < nums.size(); i++)
        {
            ans.insert(ans.begin() + index[i], nums[i]);
        }
        return ans;
    }
};
