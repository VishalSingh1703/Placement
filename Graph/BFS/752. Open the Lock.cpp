https://leetcode.com/problems/open-the-lock/?envType=daily-question&envId=2024-04-22


class Solution {
public:
    int openLock(vector<string>& deadends, string target) 
    {
        string start = "0000";
        unordered_set<string> dead(deadends.begin(), deadends.end());
        queue<pair<string, int>> q;
        unordered_set<string> visited;
        if(dead.find(start) == dead.end())
        {
            q.push({start, 0});
            visited.insert(start);
        }

        while(!q.empty())
        {
            pair<string, int> curr = q.front();
            q.pop();


            string s = curr.first;
            int count = curr.second;

            if(s == target) return count;

            for(int i = 0; i < 4; i++)
            {
                string temp1, temp2;
                temp1 = s.substr(0, i) + to_string((s[i] - '0' + 1)%10) + s.substr(i + 1);
                temp2 = s.substr(0, i) + to_string((s[i] - '0' - 1 + 10)%10) + s.substr(i + 1);

                if(dead.find(temp1) == dead.end() && visited.find(temp1) == visited.end())
                {
                    q.push({temp1, count+1});
                    visited.insert(temp1);
                }

                if(dead.find(temp2) == dead.end() && visited.find(temp2) == visited.end())
                {
                    q.push({temp2, count+1});
                    visited.insert(temp2);
                }
            }
        }
        return -1;
    }
};
