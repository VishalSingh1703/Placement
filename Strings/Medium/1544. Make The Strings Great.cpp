https://leetcode.com/problems/make-the-string-great/?envType=daily-question&envId=2024-04-05


class Solution {
public:
    string makeGood(string s) {
        stack<char> st;
        for(char c: s)
        {
            if(!st.empty() && abs(st.top() - c) == 32) st.pop();
            else st.push(c);
        }
        string ans;
        while(!st.empty()) ans = st.top() + ans, st.pop();
        return ans;
    }
};
