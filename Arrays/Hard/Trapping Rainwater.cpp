https://leetcode.com/problems/trapping-rain-water/



class Solution {
public:
    int trap(vector<int>& height) 
    {
        int left = 0, right = height.size()-1;
        int leftMax = 0, rightMax = 0;
        int area = 0;
        while(left<=right)
        {
            if(height[left]<=height[right])
            {
                if(height[left]>leftMax) leftMax = height[left];
                else area += leftMax - height[left];
                left++;
            }
            else
            {
                if(height[right]>rightMax) rightMax = height[right];
                else area += rightMax - height[right];
                right--;
            }
        }
        return area;

        // int n = height.size();
        // if (n <= 2) {
        //     return 0;  // No trapping is possible with less than 3 bars
        // }

        // int area = 0;
        // std::stack<int> st;

        // for (int i = 0; i < n; ++i) {
        //     while (!st.empty() && height[i] > height[st.top()]) {
        //         int top = st.top();
        //         st.pop();

        //         if (st.empty()) {
        //             break;  // No left boundary
        //         }

        //         int distance = i - st.top() - 1;
        //         int boundedHeight = std::min(height[i], height[st.top()]) - height[top];
        //         area += distance * boundedHeight;
        //     }

        //     st.push(i);
        // }

        // return area;
    }
};
