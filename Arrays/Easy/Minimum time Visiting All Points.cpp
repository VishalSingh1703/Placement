https://leetcode.com/problems/minimum-time-visiting-all-points/?envType=daily-question&envId=2023-12-03


class Solution {
public:
    int minTimeToVisitAllPoints(vector<vector<int>>& points) {
        int x = points[0][0];
        int y = points[0][1];
        int time = 0;
        for(int i = 1; i<=points.size()-1; i++)
        {
            cout<<x - points[i][0]<<" "<<y - points[i][1]<<endl;
            time += max(abs(x - points[i][0]), abs(y - points[i][1]));
            x = points[i][0];
            y = points[i][1];
        }
        return time;
    }
};
