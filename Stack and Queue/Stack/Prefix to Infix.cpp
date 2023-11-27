https://www.codingninjas.com/studio/problems/prefix-to-infix_1215000?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTabValue=SUBMISSION


string prefixToInfixConversion(string &s){
	
	int n=s.size();
	stack<string>st;

	for(int i=n-1;i>=0;i--)
	{
		if(s[i]>='a' && s[i]<='z')
		{
			string exp="";
			exp+=s[i];
			st.push(exp);
		}
		else
		{
			string s1=st.top();
			st.pop();
			string s2=st.top();
			st.pop();

			string exp='('+ s1 + s[i] + s2 +')';
			st.push(exp);
		}
	}
	string res="";
	res=st.top();
	return res;
}
