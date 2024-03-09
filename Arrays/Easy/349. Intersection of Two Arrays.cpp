https://leetcode.com/problems/intersection-of-two-arrays/


class Solution {
public:
    vector<int> intersection(vector<int>& n1, vector<int>& n2) 
    {
        // unordered_set<int> freq;
        // unordered_set<int> ans;
        // for(int i : n1) freq.insert(i);
        // for(int i : n2) {if(freq.count(i) > 0) ans.insert(i);}
        // vector<int> res(ans.begin(), ans.end());
        // vec.erase(unique(vec.begin(), vec.end()), vec.end());
        // return res;


        unordered_set<int> freq;
        vector<int> ans;
        for(int i : n1) freq.insert(i);
        for(int i : n2) {if(freq.count(i) > 0) ans.push_back(i);}
        sort(ans.begin(), ans.end());
        ans.erase(unique(ans.begin(), ans.end()), ans.end());
        return ans;
    }
};
