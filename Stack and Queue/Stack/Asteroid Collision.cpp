https://leetcode.com/problems/asteroid-collision/


class Solution {
public:
    vector<int> asteroidCollision(vector<int>& a) {
        vector<int> ans;
        for(int i : a)
        {
            if(i>0) ans.push_back(i);
            else
            {
                while(!ans.empty() && ans.back()<abs(i) && ans.back()>0) ans.pop_back();
                if(ans.empty() || ans.back()<0) ans.push_back(i);
                else if(ans.back() == -i) ans.pop_back();
            }
        }
        return ans;
    }
};
