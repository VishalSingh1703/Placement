https://leetcode.com/problems/maximize-happiness-of-selected-children/


class Solution {
public:
    long long maximumHappinessSum(vector<int>& h, int k) 
    {
        sort(h.begin(), h.end());
        long long ans = 0;
        int m = 0, i = h.size() - 1;
        while(i >= 0 && k > 0 && h[i] - m >= 0)
        {
            ans += (h[i--] - m);
            m++;
            k--;
        }
        return ans;
    }
};
