https://leetcode.com/problems/daily-temperatures/?envType=daily-question&envId=2024-01-31


class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temp) 
    {
        vector<int> ans(temp.size(), 0);
        stack<pair<int, int>> st; 
        for(int i = temp.size()-1; i >= 0; i--)
        {
            if(st.empty()) st.push({temp[i], i});
            else
            {
                while(!st.empty() && temp[i] >= st.top().first) st.pop();
                if(!st.empty()) ans[i] = st.top().second - i;
                st.push({temp[i], i});
            }
        }
        return ans;
    }
};
