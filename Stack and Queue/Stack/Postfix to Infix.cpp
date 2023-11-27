#include<bits/stdc++.h>
#include<iostream>
using namespace std;
string postToInfix(string postfix) 
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
            exp = '(' + s2 + postfix[i] + s1 + ')';
            st.push(exp);
        }
    }
    return st.top();

}

int main()
{
    cout<<postToInfix("ab+c+");
    return 0;
}
