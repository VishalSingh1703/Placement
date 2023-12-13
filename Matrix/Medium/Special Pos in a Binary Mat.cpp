https://leetcode.com/problems/special-positions-in-a-binary-matrix/?envType=daily-question&envId=2023-12-13


class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        vector<int> rows(mat.size(), 0), cols(mat[0].size(), 0);
        for(int i = 0; i<rows.size(); i++)
        {
            for(int j = 0; j<cols.size(); j++)
            {
                if(mat[i][j]) rows[i]++, cols[j]++;
            }
        }
        int count = 0;
        for(int i = 0; i<rows.size(); i++)
        {
            for(int j = 0; j<cols.size(); j++)
            {
                if(mat[i][j] && rows[i] == 1 and cols[j] == 1) count++;
            }
        }
        return count;
    }
};
