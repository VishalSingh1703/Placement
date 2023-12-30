https://leetcode.com/problems/redistribute-characters-to-make-all-strings-equal/?envType=daily-question&envId=2023-12-30


class Solution {
public:
    bool makeEqual(vector<string>& words) {
        unordered_map<char, int> freq;
        int l = words.size();
        for(auto s : words)
            for(auto c : s) freq[c]++;
        
        for(auto i : freq)
            if(i.second % l != 0) return false;
        
        return true;
    }
};  
