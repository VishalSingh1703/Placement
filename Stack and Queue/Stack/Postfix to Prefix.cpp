https://www.codingninjas.com/studio/problems/postfix-to-prefix_1788455?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTabValue=SUBMISSION


#include<bits/stdc++.h>
#include<iostream>
using namespace std;
string postfixToPrefix(string postfix) 
{
    stack<string> st;
    for(int i=0;i<postfix.length();i++)
    {
        if(isalnum(postfix[i]))
        {
            string temp = "";
            temp = postfix[i];
            st.push(temp);
        }
        else 
        {
            string s1 = st.top();
            st.pop();
            string s2 = st.top();
            st.pop();
            string exp = "";
            exp = postfix[i] + s2 + s1;
            st.push(exp);
        }
    }
    return st.top();

}
