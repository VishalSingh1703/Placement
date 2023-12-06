https://leetcode.com/problems/hand-of-straights/description/


class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
        map<int, int> c;
        for(int i : hand) c[i]++;
        for(auto it : c)
            if(c[it.first] > 0)
                for(int i = groupSize - 1; i>=0; --i)
                    if((c[it.first + i] -= c[it.first])<0) return false;
        return true;
    }
};
