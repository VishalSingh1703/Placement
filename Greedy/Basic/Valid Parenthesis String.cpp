https://leetcode.com/problems/valid-parenthesis-string/


class Solution {
public:
    // bool checkValidString(string s) {
    //     int o = 0, a = 0;
    //     for(int i = 0; i<s.length(); i++)
    //     {
    //         if(s[i]=='(') o++;
    //         else if(s[i]=='*') a++;
    //         else
    //         {
    //             if(o>0) o--;
    //             else if(o == 0 && a>0) a--;
    //             else if(o==0 && a==0) return false;
    //         }
    //     }
    //     cout<<o<<" "<<a;
    //     return a>=abs(o);
    // }

    bool checkValidString(string s)
    {
        int mn = 0, mx = 0;
        for(char c:s)
        {
            if(c == '(') mx++, mn++;
            if(c == ')') mx--, mn = max(mn - 1, 0);
            if(c == '*') mx++, mn = max(mn - 1, 0);
            if(mx<0) return false;
        }
        return mn == 0;
    }

};
