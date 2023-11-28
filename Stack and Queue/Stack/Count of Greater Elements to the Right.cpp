https://www.codingninjas.com/studio/problems/count-of-greater-elements-to-the-right_8365436?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTabValue=SUBMISSION


vector<int> countGreater(vector<int>&arr, vector<int>&query) 
{
    vector<int> ans;
    for(int i = 0; i<query.size(); i++)
    {
        int count = 0;
        int num = arr[query[i]];
        for(int j = query[i]+1; j<arr.size(); j++)
        {
            if(arr[j]>num) count++;
        }
        ans.push_back(count);
    }
    return ans;
}
