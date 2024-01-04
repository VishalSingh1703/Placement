https://leetcode.com/problems/minimum-number-of-operations-to-make-array-empty/?envType=daily-question&envId=2024-01-04


class Solution {
public:
    int minOperations(vector<int>& nums) {
        unordered_map<int, int> freq;
        for(int i : nums) freq[i]++;
        int count = 0;
        for(auto it : freq)
        {
            int t = it.second;
            if(t == 1) return -1;
            count += t/3;
            if(t%3) count++;
        }
        return count;
    }
};
