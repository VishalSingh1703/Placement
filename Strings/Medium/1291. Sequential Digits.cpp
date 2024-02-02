https://leetcode.com/problems/sequential-digits/?envType=daily-question&envId=2024-02-02


class Solution {
public:
    vector<int> sequentialDigits(int low, int high) 
    {
        string dig = "123456789";
        int nh = to_string(high).length();
        int nl = to_string(low).length();
        vector<int> ans;
        for(int i = nl; i<=nh; ++i)
        {
            for(int j = 0; j<10-i; ++j)
            {
                int num = stoi(dig.substr(j, i));
                if(num>=low && num<=high) ans.push_back(num);
            }
        }
        return ans;
    }
};
