https://leetcode.com/problems/custom-sort-string/


class Solution {
public:
    string customSortString(string order, string s) {
        unordered_map<char, int> freq;
        string ans = "";
        for(char i : s) freq[i]++;
        for(int i = 0; i<order.size(); i++)
        {
            if(freq.count(order[i]) > 0) 
            {
                while(freq[order[i]] > 0)
                {
                    ans += order[i];
                    freq[order[i]]--;
                }
            }
        }
        for(auto it : freq) while(it.second > 0) {ans += it.first; it.second--;}
        return ans;
    }
};
