#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
using namespace std;

int Sum(vector<int> cand)
{
    int sum = 0;
    for (int i : cand)
        sum += i;
    return sum;
}

void calc(vector<int> &cand, vector<int> nums, vector<vector<int>> &ans, set<vector<int>> &uniqueSubarrays, int target, int ind)
{
    if (ind == nums.size())
    {
        if (Sum(cand) == target && uniqueSubarrays.find(cand) == uniqueSubarrays.end()) {
            ans.push_back(cand);
            uniqueSubarrays.insert(cand);
        }
        return;
    }
    if (Sum(cand) == target && uniqueSubarrays.find(cand) == uniqueSubarrays.end()) {
        ans.push_back(cand);
        uniqueSubarrays.insert(cand);
    }
    if (Sum(cand) > target)
        return;
    cand.push_back(nums[ind]);
    calc(cand, nums, ans, uniqueSubarrays, target, ind + 1);
    cand.pop_back();
    calc(cand, nums, ans, uniqueSubarrays, target, ind + 1);
}

int main()
{
    vector<vector<int>> ans;
    vector<int> cand;
    set<vector<int>> uniqueSubarrays;
    int T = 0;
    cout << "Enter the number of testcases: ";
    cin >> T;
    int n;
    for (int t = 0; t < T; t++)
    {
        cout << "Enter the length of the vector: ";
        cin >> n;
        vector<int> nums(n);
        cout << "Enter elements of the vector: ";
        for (int i = 0; i < n; i++)
        {
            cin >> nums[i];
        }
        int target;
        cout << "Enter the target sum: ";
        cin.ignore(); // Add this line to clear the input buffer
        cin >> target;
        calc(cand, nums, ans, uniqueSubarrays, target, 0);
        cout << "Subarrays with sum equal to " << target << " are: ";
        for (int i = 0; i < ans.size(); i++)
        {
            cout << "( ";
            for (int j = 0; j < ans[i].size(); j++)
            {
                cout << ans[i][j] << " ";
            }
            cout << ")";
        }
        cout << endl;
        ans.clear();
        uniqueSubarrays.clear();
    }
    return 0;
}
