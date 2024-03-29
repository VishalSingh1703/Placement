https://leetcode.com/problems/minimum-length-of-string-after-deleting-similar-ends/?envType=daily-question&envId=2024-03-05


class Solution {
public:
    int minimumLength(string s) 
    {
        int left = 0, right = s.length() - 1;

        while(left < right && s[left] == s[right])
        {
            char ch = s[left];
            while(left <= right && s[left] == ch) left++;
            while(left <= right && s[right] == ch) right--;
        }
        
        return right - left + 1;
    }
};
