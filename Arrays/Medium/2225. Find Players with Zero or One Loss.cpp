https://leetcode.com/problems/find-players-with-zero-or-one-losses/?envType=daily-question&envId=2024-01-15


// class Solution {
// public:
//     vector<vector<int>> findWinners(vector<vector<int>>& m) 
//     {
//         vector<vector<int>> ans;
//         vector<int> vict;
//         vector<int> oneLoss;
//         unordered_map<int, int> mp;
//         for(int i = 0; i<m.size(); i++)
//         {
//             mp[m[i][1]]--;
//         }
//         for(auto [c, i] : mp)
//         {
//             if(i == -1) oneLoss.push_back(c);
//         }
//         for(int i = 0; i<m.size(); i++)
//         {
//             if(mp.count(m[i][0])<1)
//             {
//                 vict.push_back(m[i][0]);
//                 mp[m[i][0]]++;
//             }
//         }
//         sort(vict.begin(), vict.end());
//         sort(oneLoss.begin(), oneLoss.end());
//         ans.push_back(vict), ans.push_back(oneLoss);
//         return ans;
//     }
// };

class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) 
    {
        
        unordered_map<int,int>lost;
        int n = matches.size();
        int m = matches[0].size();
        vector<vector<int>>result(2);
        
        for(const vector<int>& v : matches)
        {
            lost[v[0]];
            lost[v[1]]++;
        }
        
        for(auto &i : lost)
        {
            if(i.second==0) result[0].push_back(i.first);
            else if(i.second==1) result[1].push_back(i.first);
        }
        
        sort(result[0].begin(), result[0].end());
        sort(result[1].begin(), result[1].end());
            
        return result;
    }
};
