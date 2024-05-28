https://leetcode.com/problems/letter-combinations-of-a-phone-number/description/


class Solution {
public:

    vector<string> keys = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};

    void solve(string s, int index, string digits, vector<string> &ans)
    {
        if(index == digits.length()) ans.push_back(s);
        else
        {
            string letter = keys[digits[index] - '0'];
            for(char c : letter)
            {
                solve(s + c, index + 1, digits, ans);
            }
        }
    }

    vector<string> letterCombinations(string digits) 
    {
        vector<string> ans;
        if(digits.empty()) return ans;
        solve("", 0, digits, ans);
        return ans;
    }
};
