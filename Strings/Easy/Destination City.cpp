https://leetcode.com/problems/destination-city/?envType=daily-question&envId=2023-12-15


class Solution {
public:
    string destCity(vector<vector<string>>& paths) 
    {
        int s = paths.size();
        unordered_map<string, int> mp;
        for(int i = 0; i<s; i++) mp[paths[i][0]]++;
        for(int i = 0; i<s; i++)
        {
            if(mp[paths[i][1]]<1) return paths[i][1];
        }
        return "";
    }
};
