https://leetcode.com/problems/widest-vertical-area-between-two-points-containing-no-points/?envType=daily-question&envId=2023-12-21


class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
        vector<int> ans;
        int diff = 0;
        for(auto i : points) ans.push_back(i[0]);
        sort(ans.begin(), ans.end());
        for(int i = 1; i<ans.size(); i++) diff = max(diff, ans[i] - ans[i-1]);
        return diff;
        // set<int> x;
        // int res = 0;
        // for (auto &p : points) x.insert(p[0]);
        // for (auto it = next(begin(x)); it != end(x); ++it)
        //     res = max(res, *it - *prev(it));
        // return res;
    }
};
