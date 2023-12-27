https://leetcode.com/problems/minimum-time-to-make-rope-colorful/description/?envType=daily-question&envId=Invalid%20Date


class Solution {
public:
    int minCost(string colors, vector<int>& cost) {
        int ans = 0, maxCost = 0, n = colors.size();
        for(int i = 0; i<n; i++)
        {
            if(i>0 && colors[i]!=colors[i-1]) maxCost = 0;
            ans += min(maxCost, cost[i]);
            maxCost = max(maxCost, cost[i]);
        }
        return ans;
    }
};
