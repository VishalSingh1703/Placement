https://leetcode.com/problems/largest-3-same-digit-number-in-string/description/?envType=daily-question&envId=2023-12-04


class Solution {
public:
    string largestGoodInteger(string num) {
        string ans = "";
        for(int i = 0; i<num.length()-2; i++)
        {
            if(num[i] == num[i+2])
            {
                if(num[i] == num[i+1]) ans = max(ans, num.substr(i, 3));
            }
        }
        return ans;
    }
};
