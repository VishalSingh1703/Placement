https://leetcode.com/problems/element-appearing-more-than-25-in-sorted-array/?envType=daily-question&envId=2023-12-11


class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        int quart = arr.size()/4;
        for(int i = 0; i<arr.size() - quart; i++)
        {
            if(arr[i] == arr[i+quart]) return arr[i];
        }
        return arr[0];
    }
};
