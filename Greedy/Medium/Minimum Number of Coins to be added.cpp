https://leetcode.com/problems/minimum-number-of-coins-to-be-added/


class Solution {
public:
    int minimumAddedCoins(vector<int>& coins, int target) {
        sort(coins.begin(), coins.end());
        int mx = 0;
        int index = 0;
        int count = 0;
        while(mx<target)
        {
            if(index<coins.size() && coins[index]<=mx+1)
            {
                mx += coins[index];
                index++;
            }
            else
            {
                mx += mx + 1;
                count++;
            }
        }
        return count;
    }
};
