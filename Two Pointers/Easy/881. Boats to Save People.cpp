https://leetcode.com/problems/boats-to-save-people/description/?envType=daily-question&envId=2024-05-04


const int ZERO = []()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	return 0;
}();
#pragma GCC optimize("O3", "unroll-loops")

class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) 
    {
        sort(people.begin(), people.end());
        int left = 0, right = people.size() - 1, boats = 0;
        while(left <= right)
        {
            if((people[left] + people[right]) <= limit) left++, right--, boats++;
            else right--, boats++;
        }
        return boats;
    }
};
