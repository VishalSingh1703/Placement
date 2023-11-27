https://www.codingninjas.com/studio/problems/convert-prefix-to-postfix_8391014?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTabValue=PROBLEM


string preToPost(string prefix) {
    reverse(prefix.begin(), prefix.end());
    stack<string> st;
    for(int i=0;i<prefix.length();i++)
    {
        if(isalnum(prefix[i]))
        {
            string temp = "";
            temp = prefix[i];
            st.push(temp);
        }
        else 
        {
            string s1 = st.top();
            st.pop();
            string s2 = st.top();
            st.pop();
            string exp = "";
            exp = prefix[i] + s2 + s1;
            st.push(exp);
        }
    }
    string ans = st.top();
    reverse(ans.begin(), ans.end());
    return ans;
}
