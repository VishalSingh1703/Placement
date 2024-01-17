https://leetcode.com/problems/unique-number-of-occurrences/


class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> m;
        for(int i : arr) m[i]++; // insert element in map and increase frequency
        unordered_set<int> s;
        for(auto [e , i] : m) // traverse throught the map, e->element, i->frequency
        {
            if(s.count(i)>0) return false;
            s.insert(i);
        }
        return true;
    }
};
