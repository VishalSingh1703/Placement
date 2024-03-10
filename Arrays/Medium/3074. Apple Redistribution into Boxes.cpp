https://leetcode.com/problems/apple-redistribution-into-boxes/


class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) 
    {
        int sum = 0, count = 0, j = capacity.size() - 1;
        sort(capacity.begin(), capacity.end());
        for(int i : apple) sum += i;
        while(sum > 0)
        {
            sum -= capacity[j--];
            count++;
        }
        return count;
    }
};
