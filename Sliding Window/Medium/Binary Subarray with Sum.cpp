https://leetcode.com/problems/binary-subarrays-with-sum/

/*
The subtraction atMost(A, S) - atMost(A, S - 1) in the numSubarraysWithSum function is used to find the number of subarrays with the exact sum S. Let's break down the math behind this with an example:

Suppose you have an array A = [1, 0, 1, 0, 1] and you want to find the number of subarrays with the sum S = 2.

Calculate atMost(A, S) where S = 2:

Initialize i = 0 and res = 0.
Iterate through the array A with a sliding window using two pointers i and j.
At each step, subtract A[j] from S and adjust the window until the sum is at most S.
Update res by adding the length of the current subarray (j - i + 1).
After the iteration, res will be the count of subarrays with a sum at most S.
Example:

scss
Copy code
atMost(A, 2) = 8
Calculate atMost(A, S - 1) where S - 1 = 1:

Follow the same process to find the count of subarrays with a sum at most S - 1.
Example:

scss
Copy code
atMost(A, 1) = 6
Subtract to Find the Exact Count:

Subtracting the count of subarrays with a sum at most S - 1 from the count of subarrays with a sum at most S gives the count of subarrays with the exact sum S.


User
show me how atMost(A, 2)
ChatGPT
Certainly! Let's go through a step-by-step calculation for atMost(A, 2) using the example array A = [1, 0, 1, 0, 1]:

cpp
Copy code
int atMost(vector<int>& A, int S) {
    if (S < 0) return 0;
    int res = 0, i = 0, n = A.size();
    for (int j = 0; j < n; j++) {
        S -= A[j];
        while (S < 0)
            S += A[i++];
        res += j - i + 1;
    }
    return res;
}
Initialization:

S = 2
res = 0
i = 0
Array A = [1, 0, 1, 0, 1]
Iteration 1 (j=0):

S -= A[0]: S becomes 1
res += 0 - 0 + 1: res becomes 1
Iteration 2 (j=1):

S -= A[1]: S becomes 1
res += 1 - 0 + 1: res becomes 3
Iteration 3 (j=2):

S -= A[2]: S becomes 0
res += 2 - 0 + 1: res becomes 6
Iteration 4 (j=3):

S -= A[3]: S becomes 0
res += 3 - 0 + 1: res becomes 10
Iteration 5 (j=4):

S -= A[4]: S becomes -1
while (S < 0) is true, so S is adjusted by incrementing i and updating res.
i becomes 1
res += 4 - 1 + 1: res becomes 14
Result:

The final result of atMost(A, 2) is 14.
So, the count of subarrays with a sum at most 2 in the array [1, 0, 1, 0, 1] is 14.
*/


class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        return atMost(nums, goal) - atMost(nums, goal-1);
    }
    
    int atMost(vector<int> &nums, int goal)
    {
        if(goal<0) return 0;
        int i = 0, res = 0;
        for(int j = 0; j<nums.size(); j++)
        {
            goal -= nums[j];
            while(goal<0) goal += nums[i++];
            res += j - i + 1;
        }
        return res;
    }
};
