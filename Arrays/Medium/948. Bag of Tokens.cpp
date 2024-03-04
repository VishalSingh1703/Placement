https://leetcode.com/problems/bag-of-tokens/?envType=daily-question&envId=2024-03-04


class Solution 
{
public:
    int bagOfTokensScore(vector<int>& tokens, int power) 
    {
        sort(tokens.begin(), tokens.end());
        int left = 0;
        int right = tokens.size() - 1;
        int score = 0;
        int max_score = 0;
        while(left <= right)
        {
            if(tokens[left] <= power)
            {
                score++;
                power -= tokens[left];
                left++;
                max_score = max(max_score, score);
            }
            else if(score > 0)
            {
                power += tokens[right];
                right--;
                score--;
            }
            else break;
        }
        return max_score;
    }
};
