https://leetcode.com/problems/maximum-score-after-splitting-a-string/


class Solution {
public:
    int maxScore(string s) {
        int ones = s[0] == '1' ? -1 : 0, zeroes = s[0] == '0' ? 1 : 0;
        for(char i : s) if(i == '1') ones++;
        int sum = ones + zeroes;
        for(int i = 1; i<s.length() - 1; i++)
        {
            if(s[i] == '0') zeroes++;
            else ones--;
            sum = max(sum, ones + zeroes);
        }
        return sum;
    }
};

// class Solution {
// public:
//     int maxScore(string s) {
//         int rightOnes = 0, leftZeroes = 0;
//         for(char c: s)
//             if(c=='1') rightOnes++;
        
//         int score = 0;
//         for(int i=0; i<s.length()-1; i++){
//             if(s[i]=='0') leftZeroes++;
//             else rightOnes--;
//             score = max(score, leftZeroes + rightOnes);
//         }
//         return score;
//     }
// };
