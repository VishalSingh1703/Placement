https://leetcode.com/problems/maximum-points-you-can-obtain-from-cards/


class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int ans = 0;
        for(int i = 0; i<k; i++)
        {
            ans += cardPoints[i];
        }
        int cur = ans;
        for(int i = k-1; i>=0; i--)
        {
            cur -= cardPoints[i];
            cur += cardPoints[cardPoints.size() - k + i];
            ans = max(ans, cur);
        }
        return ans;
    }
};
