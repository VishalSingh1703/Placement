https://leetcode.com/problems/multiply-strings/description/


class Solution {
public:
    string multiply(string n1, string n2) 
    {
        if(n1 == "0" || n2 == "0") return "0";
        vector<int> res(n1.size() + n2.size(), 0);
        for(int i = n1.size() - 1; i >= 0; i--)
        {
            for(int j = n2.size() - 1; j >= 0; j--)
            {
                res[i + j + 1] += (n1[i] - '0') * (n2[j] - '0');
                res[i + j] += res[i + j + 1] / 10;
                res[i + j + 1] %= 10;
            }
        }
        int i = 0;
        string ans = "";
        while(res[i] == 0) i++;
        while(i < res.size()) ans += to_string(res[i++]);
        return ans;
    }
};
