https://www.codingninjas.com/studio/problems/print-all-divisors-of-a-number_1164188?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTabValue=SUBMISSION


vector<int> printDivisors(int n) {
    vector<int> ans;
    for(int i = 1; i*i<=n; i++)
    {
        if(n%i==0)
        {
            ans.push_back(i);
            if(n/i!=i) ans.push_back(n/i);
        }
    }
    sort(ans.begin(), ans.end());
    return ans;
}
