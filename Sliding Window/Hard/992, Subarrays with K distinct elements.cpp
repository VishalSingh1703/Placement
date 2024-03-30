https://leetcode.com/problems/subarrays-with-k-different-integers/?envType=daily-question&envId=2024-03-30


// class Solution {
// public:
//     int subarraysWithKDistinct(vector<int>& nums, int k) 
//     {
//         cout<<exact(nums, k) << " " << exact(nums, k - 1);
//         return exact(nums, k) - exact(nums, k - 1);
//     }

//     int exact(vector<int> nums, int k)
//     {
//         unordered_map<int, int> freq;
//         int left = 0, right = 0, distinct = 0;
//         for(right = 0; right < nums.size(); right++)
//         {
//             freq[nums[right]]++;
//             while(freq.size() > k)
//             {
//                 freq[nums[left]]--;
//                 if(freq[nums[left]] == 0) freq.erase(nums[left]);
//                 left++;
//             }
//             distinct += right - left + 1;
//         }
//         return distinct;
//     }
// };


class Solution {
public:
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        int res = 0, prefix = 0, left = 0, right = 0, distinct = 0, n = nums.size();
        unordered_map<int,int> freq;
        while( right<n ) {
            freq[nums[right]]++;
            if(freq[nums[right]]==1) distinct++;
            
            if(distinct > k) {
                freq[nums[left]]--, distinct--;
                left++;
                prefix = 0;
            }

            while(freq[nums[left]]>1) {
                freq[nums[left]]--;
                prefix++;
                left++;
            }

            if(distinct==k) res += prefix+1;

            right++;
        }
        return res;
    }
};
