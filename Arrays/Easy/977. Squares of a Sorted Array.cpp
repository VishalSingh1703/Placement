https://leetcode.com/problems/squares-of-a-sorted-array/?envType=daily-question&envId=2024-03-02


// class Solution {
// public:
//     vector<int> sortedSquares(vector<int>& nums) 
//     {
//         for(int i = 0; i<nums.size(); i++) nums[i] = nums[i] * nums[i];
//         sort(nums.begin(), nums.end());
//         return nums; 
//     }
// };

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {

        int left=0,right=nums.size()-1;
        vector<int> ans(nums.size());
        int l=nums.size()-1;
        while(left<=right)
        {
            if(abs(nums[left])>abs(nums[right]))
            {
                ans[l--]=(nums[left]*nums[left]);
                left++;
            }
            else
            {
                ans[l--]=(nums[right]*nums[right]);
                right--;
                
            }
        }
        return ans;
        
    }
};
