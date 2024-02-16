https://leetcode.com/problems/remove-element/description/


class Solution {
public:
    int removeElement(vector<int>& nums, int val) 
    {
        int j = 0;
        for(int i = 0; i<nums.size(); i++)
        {
            if(nums[i] != val)
            {
                cout<<i<<" "<<j<<" "<<nums[i]<<endl;
                nums[j] = nums[i];
                j++;
            }
        }
        return j;
    }
};
