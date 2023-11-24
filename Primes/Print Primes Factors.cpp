https://www.codingninjas.com/studio/problems/prime-factorisation_1760849?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTabValue=PROBLEM


vector<int> countPrimes(int n)
{
   vector<int> ans;
   int prev = 0;
   for(int i = 2; i*i<=n; i++)
   {
        if(n%i==0)ans.push_back(i);
        while(n%i==0)
        {
            n /= i;
        }
   }
   if(n>1) ans.push_back(n);
   return ans;
}
