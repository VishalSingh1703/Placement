https://leetcode.com/problems/flood-fill/


class Solution {
public:

    void dfs(int sr, int sc, vector<vector<int>>& img, int org, int tar)
    {
        if(sr<0 || sr>=img.size() || sc<0 || sc>=img[0].size() || img[sr][sc] == tar || img[sr][sc] != org) return;
        img[sr][sc] = tar;
        dfs(sr+1, sc, img, org, tar);
        dfs(sr, sc+1, img, org, tar);
        dfs(sr-1, sc, img, org, tar);
        dfs(sr, sc-1, img, org, tar);
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int org = image[sr][sc];
        dfs(sr, sc, image, org, color);
        return image;
    }
};
