https://leetcode.com/problems/buy-two-chocolates/?envType=daily-question&envId=2023-12-20


class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        int a = INT_MAX;
        int b = INT_MAX;
        for(int i : prices)
        {
            if(i<b || i<a)
            {
                b = min(a,b);
                a = i;
            }
        }
        cout<<a<<" "<<b<<endl;
        return (money >= (a+b)) ? money - (a+b) : money;
    }
    // int buyChoco(vector<int>& p, int money) 
    // {
    //     nth_element(begin(p), begin(p) + 2, end(p));
    //     return money < p[0] + p[1] ? money : money - p[0] - p[1];
    // }
};
