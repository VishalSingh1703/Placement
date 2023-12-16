https://leetcode.com/problems/merge-similar-items/


class Solution {
public:
    vector<vector<int>> mergeSimilarItems(vector<vector<int>>& items1, vector<vector<int>>& items2) {
        map<int, int> sum;
        for(int i = 0; i<items1.size(); i++)
        {
            sum[items1[i][0]] = items1[i][1];
        }
        for(int i = 0; i<items2.size(); i++)
        {
            if(sum.find(items2[i][0])!=sum.end())sum[items2[i][0]] += items2[i][1];
            else sum[items2[i][0]] += items2[i][1];
        }
        vector<vector<int>> ans;
        for(auto [key,value] : sum) ans.push_back({key,value});
        return ans;
    }
};
