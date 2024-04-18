https://leetcode.com/problems/island-perimeter/?envType=daily-question&envId=2024-04-18


class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int count = 0, repeat = 0;
        for(int i = 0; i < grid.size(); i++)
        {
            for(int j = 0; j < grid[0].size(); j++)
            {
                if(grid[i][j] == 1)
                {
                    count++;
                    if(i != 0 && grid[i-1][j] == 1) repeat++; 
                    if(j != 0 && grid[i][j-1] == 1) repeat++; 
                }
            }
        }
        return (count * 4) - (repeat * 2);
    }
};
