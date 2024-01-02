https://leetcode.com/problems/convert-an-array-into-a-2d-array-with-conditions/description/?envType=daily-question&envId=2024-01-02


// class Solution {
// public:
//     vector<vector<int>> findMatrix(vector<int>& nums) 
//     {
//         unordered_map<int, int> freq;
//         for(int i : nums) freq[i]++;
//         vector<vector<int>> ans;
//         int mx = 0;
//         for(auto i : freq) mx = max(mx, i.second);
//         for(int i = 0; i<mx; i++)
//         {
//             vector<int> sect;
//             for (auto& j : freq) 
//             {
//                 if (j.second) 
//                 {
//                     sect.push_back(j.first);
//                     j.second -= 1;
//                 }
//             }
//             ans.push_back(sect);
//         }
//         return ans;
//     }
// };


class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        vector<int> freq(nums.size() + 1);
        
        vector<vector<int>> ans;
        for (int c : nums) {
            if (freq[c] >= ans.size()) {
                ans.push_back({});
            }
            
            // Store the integer in the list corresponding to its current frequency.
            ans[freq[c]].push_back(c);
            freq[c]++;
        }
        
        return ans;
    }
};
