https://leetcode.com/problems/rotate-array/

class Solution {
public:
    void rotate(vector<int>& nums, int k) {

        // Best Solution
        // int temp = 0;
        // for(int j = 0; j<k; j++)
        // {
        //     temp = nums[nums.size()-1];
        //     for(int i = nums.size()-1; i>0; i--)
        //     {
        //         nums[i] = nums[i-1];
        //     }
        //     nums[0] = temp;
        // }


        int n = nums.size();
        if ((n == 0) || (k <= 0))
        {
            return;
        }
        vector<int> numsCopy(n);
        for (int i = 0; i < n; i++)
        {
            numsCopy[i] = nums[i];
        }
        for (int i = 0; i < n; i++)
        {
            nums[(i + k)%n] = numsCopy[i];
        }
    }
};




class Solution {
public:
    void rotate(vector<int>& nums, int k) 
    {
        // vector<int> n;
        // for(int i : nums) n.push_back(i);
        // for(int i = 0; i<n.size(); i++) nums[(i + k)%n.size()] = n[i];

        int n = nums.size();
        k = k % n;

        reverse(nums.begin(), nums.end());
        reverse(nums.begin(), nums.begin() + k);
        reverse(nums.begin() + k, nums.end());
    }
};
