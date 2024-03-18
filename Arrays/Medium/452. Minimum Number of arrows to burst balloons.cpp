https://leetcode.com/problems/minimum-number-of-arrows-to-burst-balloons/?envType=daily-question&envId=2024-03-18


class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) 
    {
        int arrows = 1;
        sort(points.begin(), points.end());
        for(auto i : points) cout << i[0] << "," << i[1] << " ";
        // for(int i = 0; i < points.size() - 1; i++)
        // {
        //     if(points[i][1] >= points[i+1][0]) {i++; arrows--;}
        // }

        int y = points[0][1];
        for(int i = 1; i < points.size(); i++)
        {
            if(points[i][0] > y)
            {
                arrows++;
                y = points[i][1];
            }
            y = min(points[i][1], y);
        }
        return arrows;
    }
};
