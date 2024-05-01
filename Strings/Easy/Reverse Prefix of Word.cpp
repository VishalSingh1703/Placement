https://leetcode.com/problems/reverse-prefix-of-word/description/?envType=daily-question&envId=2024-05-01


class Solution {
public:
    string reversePrefix(string word, char ch) 
    {
        int index = -1;
        for(int i = 0; i < word.size(); i++)
        {
            if(word[i] == ch){ index = i; break; }
        }
        if(index == -1) return word;
        reverse(word.begin(), word.begin() + index + 1);
        // for(int j = 0; j < index/2 + 1; j++)
        // {
        //     swap(word[j], word[index - j]);
        // }


        // Approach 2
        // reverse(word.begin(), word.begin() + word.find(ch) + 1);

        return word;
    }
};
