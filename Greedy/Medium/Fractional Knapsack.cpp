https://practice.geeksforgeeks.org/problems/fractional-knapsack-1587115620/1


//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct Item{
    int value;
    int weight;
};


// } Driver Code Ends
//class implemented
/*
struct Item{
    int value;
    int weight;
};
*/


class Solution
{
    public:
    static bool cmp(Item a, Item b)
    {
        double first = (double)a.value/(double)a.weight;
        double second = (double)b.value/(double)b.weight;
        return first>second;
    }
    
    //Function to get the maximum total value in the knapsack.
    double fractionalKnapsack(int W, Item arr[], int n)
    {
        sort(arr, arr + n, cmp);
        double w = 0;
        double maxProf = 0;
        int i = 0;
        for(int i = 0; i<n; i++)
        {
            if(w + arr[i].weight <= W)
            {
                w += arr[i].weight;
                maxProf += arr[i].value;
            }
            else
            {
                int remain = W-w;
                maxProf += (arr[i].value / (double)arr[i].weight)*(double)remain;
                break;
            }
        }
        return maxProf;
    }
        
};


//{ Driver Code Starts.
int main()
{
	int t;
	//taking testcases
	cin>>t;
	cout<<setprecision(2)<<fixed;
	while(t--){
	    //size of array and weight
		int n, W;
		cin>>n>>W;
		
		Item arr[n];
		//value and weight of each item
		for(int i=0;i<n;i++){
			cin>>arr[i].value>>arr[i].weight;
		}
		
		//function call
		Solution ob;
		cout<<ob.fractionalKnapsack(W, arr, n)<<endl;
	}
    return 0;
}
// } Driver Code Ends
