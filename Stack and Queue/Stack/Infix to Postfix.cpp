https://www.codingninjas.com/studio/problems/day-23-:-infix-to-postfix-_1382146?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTabValue=SUBMISSION


#include<bits/stdc++.h>
int priority(char x)
{
	if(x=='(' || x==')') return 0;
	if(x=='+' || x=='-') return 1;
	if(x=='*' || x=='/') return 2;
	if(x=='^') return 3;
	return -1;
}
string infixToPostfix(string inf){
	string post = "";
	stack<int> st;
	for(int i = 0; i<inf.length(); i++)
	{
		if(isalnum(inf[i])) post += inf[i];
		else if(inf[i] == '(') st.push(inf[i]);
		else if(inf[i] == ')')
		{
			while(!st.empty() && st.top()!='(')
			{
				char x = st.top();
				st.pop();
				post += x;
			}
			st.pop();
		}
		else
		{
			while(!st.empty() && priority(st.top())>=priority(inf[i]))
			{
				post += st.top();
				st.pop();
			}
			st.push(inf[i]);
		}
	}
	while(!st.empty())
	{
		post += st.top();
		st.pop();
	}
	return post;
}
