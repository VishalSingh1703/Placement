https://leetcode.com/problems/count-elements-with-maximum-frequency/?envType=daily-question&envId=2024-03-08


class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int, int> mp;
        int mx = 0, ans = 0;
        for(int i : nums)
        { 
            mp[i]++;
            mx = max(mx, mp[i]);
        }
        for(auto i : mp) if(i.second == mx) ans += i.second;
        return ans;
    }
};
