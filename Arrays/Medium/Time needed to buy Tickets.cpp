https://leetcode.com/problems/time-needed-to-buy-tickets/?envType=daily-question&envId=2024-04-09


class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) 
    {
        int counter = 0, n = tickets.size();
        for(int i = 0; i < n; i++)
        {
            if(i <= k) counter += min(tickets[i], tickets[k]);
            else //counter += min(tickets[i], tickets[k] - 1);
            {
                if(tickets[i] >= tickets[k])counter += tickets[k] - 1;
                else counter += min(tickets[i], tickets[k]);
            }
        }    
        return counter;
    }
};
