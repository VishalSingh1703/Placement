https://leetcode.com/problems/lemonade-change/description/


class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        unordered_map<int, int> coins;
        coins[5] = 0;
        for(int i = 0; i<bills.size(); i++)
        {
            if(bills[i] == 5) coins[5]++;
            else if(bills[i] == 10)
            {
                if(coins[5]>0)
                {
                    coins[10]++;
                    coins[5]--;
                }
                else return false;
            }

            else if(bills[i] == 20)
            {
                if(coins[10]>0 && coins[5]>0)
                {
                    coins[10]--;
                    coins[5]--;
                }
                else if(coins[5]>=3) coins[5] -= 3;
                else return false;
            }
        }
        return true;
    }
};


// THIS CODE IS ALSO CORRECT BUT TAKES MORE TIME
// class Solution {
// public:
//     bool lemonadeChange(vector<int>& bills) {
//         int five = 0, ten = 0;
//         for (int i : bills) 
//         {
//             if (i == 5) five++;
//             else if (i == 10) five--, ten++;
//             else if (ten > 0) ten--, five--;
//             else five -= 3;
//             if (five < 0) return false;
//         }
//         return true;
//     }
// };
