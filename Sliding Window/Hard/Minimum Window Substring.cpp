https://leetcode.com/problems/minimum-window-substring/


class Solution {
public:
    string minWindow(string s, string t) {
        vector<int> map(128, 0);
        for(char c:t) map[c]++;

        int counter = t.size(); int start = 0, end = 0, len = INT_MAX, head = 0;
        while(end<s.size())
        {
            if(map[s[end++]]-- > 0) counter--;
            while(counter == 0)
            {
                if (end - start < len) {
                    head = start;
                    len= end - head;
                }
                if (map[s[start++]]++ == 0) counter++;
            }
        }
        return len == INT_MAX ? "" : s.substr(head, len);
    }
};
