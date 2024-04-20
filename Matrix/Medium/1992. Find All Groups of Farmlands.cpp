https://leetcode.com/problems/find-all-groups-of-farmland/?envType=daily-question&envId=2024-04-20


class Solution {
public:
    vector<vector<int>> findFarmland(vector<vector<int>>& land) {
        int m = land.size();
        int n = land[0].size();
        vector<vector<int>> ans;
        for(int i = 0; i < m; i++)
        {
            for(int j = 0; j < n; j++)
            {
                if(land[i][j])
                {
                    int a = i, b = j;
                    for(a = i; a < m && land[a][j]; a++)
                    {
                        for(b = j; b < n && land[a][b]; b++)
                        {
                            land[a][b] = 0;
                        }
                    } 
                    ans.push_back({i, j, a-1, b-1});
                }
            }
        }
        return ans;
    }
};
