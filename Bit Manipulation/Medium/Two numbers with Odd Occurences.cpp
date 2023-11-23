https://www.codingninjas.com/studio/problems/two-numbers-with-odd-occurrences_8160466?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTabValue=SUBMISSION


vector<int> twoOddNum(vector<int> arr){
    int both = 0;
    int n = arr.size();
    for(int i = 0; i<n; i++)
    {
        both ^= arr[i];
    }
    int rset = both&(~(both-1));
    int l = 0;
    int m = 0;
    for(int i = 0; i<n; i++)
    {
        if(arr[i]&rset) l^=arr[i];
        else m^=arr[i];
    }
    return {max(l, m), min(l, m)};
}
