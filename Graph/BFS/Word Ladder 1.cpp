https://leetcode.com/problems/word-ladder/


class Solution {
public:
    int ladderLength(string org, string tar, vector<string>& dict) {
        unordered_set<string> dic(dict.begin(), dict.end());
        dic.erase(org);
        if(dic.find(tar) == dic.end()) return 0;
        if(dict.size() == 2 && dict[1] == tar) return 0;
        queue<pair<string, int>> q;
        q.push({org, 1});
        while(!q.empty())
        {
            string s = q.front().first;
            int index = q.front().second;
            if(s == tar) return index;
            q.pop();
            for(int i = 0; i<s.length(); i++)
            {
                char original = s[i];
                for(char c = 'a'; c<='z'; c++)
                {
                    s[i] = c;
                    if(dic.find(s)!=dic.end()) 
                    {
                        dic.erase(s);
                        q.push({s, index+1});
                    }
                }
                s[i] = original;
            }
        }
        return 0;
    }
};
