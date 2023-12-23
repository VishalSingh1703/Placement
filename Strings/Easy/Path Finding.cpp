https://leetcode.com/problems/path-crossing/?envType=daily-question&envId=2023-12-23


class Solution {
public:
    bool isPathCrossing(string path) {
        unordered_set<string> s;
        int x = 0, y = 0;
        s.insert(to_string(x) + "#" + to_string(y));   
        for (char c : path) 
        {
            if (c == 'N') y++;
            if (c == 'S') y--;
            if (c == 'E') x++;
            if (c == 'W') x--;          
            string str = to_string(x) + "#" + to_string(y);
            if (s.count(str)) return true;
            else s.insert(str);
        }  
        return false;
    }
};
