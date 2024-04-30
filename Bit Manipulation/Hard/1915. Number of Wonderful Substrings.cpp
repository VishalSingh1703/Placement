https://leetcode.com/problems/number-of-wonderful-substrings/description/?envType=daily-question&envId=2024-04-30


class Solution {
public:
    long long wonderfulSubstrings(string word) 
    {
        long cnt[1024] = {1}, mask = 0, res = 0;
        for(auto ch : word)
        {
            mask ^= 1 << (ch - 'a');
            res += cnt[mask];
            for(int n = 0; n < 10; n++)
            {
                res += cnt[mask ^ (1 << n)];
            }
            ++cnt[mask];
        }
        return res;
    }
};
