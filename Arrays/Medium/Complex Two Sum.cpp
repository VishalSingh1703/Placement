https://www.codingninjas.com/studio/problems/pair-sum_697295?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTabValue=PROBLEM

//There is a minor bug in the code


#include <bits/stdc++.h>

vector<vector<int>> pairSum(vector<int> &arr, int s){
   vector<vector<int>> ans;
   vector<int> pr;
   unordered_map<int, int> mp;
   unordered_map<int, int> count;
   for(int i : arr)
   {
      mp[i]++;
      if(mp.find(s-i)!=mp.end())
      {
         if(mp[s-i]>1)
         {
            for(int j = 0; j<mp[s-i]-1; j++)
            {
               ans.push_back({i, s - i});
            }
            if(count[i]-- == 0) ans.pop_back();
         }
         else 
         {
            ans.push_back({i, s - i});
            count[i] = 1;
         }
      }
   }
   for(int i = 0; i<ans.size(); i++) sort(ans[i].begin(), ans[i].end());
   sort(ans.begin(), ans.end());
   return ans;
}
