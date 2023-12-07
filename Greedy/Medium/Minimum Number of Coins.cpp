https://practice.geeksforgeeks.org/problems/-minimum-number-of-coins4426/1?utm_source=geeksforgeeks&utm_medium=ml_article_practice_tab&utm_campaign=article_practice_tab


//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    // static int binSearch(int arr[], int n)
    // {
    //     int left = 0;
    //     int right = sizeof(arr);
    //     int ans = 0;
    //     while(left<=right)
    //     {
    //         int mid = left + (right - left)/2;
    //         if(arr[mid]<=n)
    //         {
    //             ans = arr[mid];
    //             left = mid + 1;
    //         }
    //         else right = mid - 1;
    //     }
    //     return ans;
    // }
    vector<int> minPartition(int N)
    {
        // vector<int> ans;
        // int coin;
        // while(N>0)
        // {
        //     coin = binSearch(arr, N);
        //     ans.push_back(coin);
        //     N -= coin;
        // }
        
        vector<int> coins = {1, 2, 5, 10, 20, 50, 100, 200, 500, 2000};
        int j = coins.size() - 1;
        vector<int> ans;
        while(N)
        {
            while(N>=coins[j])
            {
                ans.push_back(coins[j]);
                N -= coins[j];
            }
            j--;
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        
        Solution ob;
        vector<int> numbers = ob.minPartition(N);
        for(auto u: numbers)
            cout<<u<<" ";
        cout<<"\n";
    }
    return 0;
}
// } Driver Code Ends
