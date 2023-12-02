https://leetcode.com/problems/find-words-that-can-be-formed-by-characters/?envType=daily-question&envId=2023-12-02


class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        int ans = 0;
        vector<int> freq(26, 0);
        for(char c:chars)
        {
            freq[c-'a']++;
        }
        vector<int> copy = freq;
        int temp;
        for(int i = 0; i<words.size(); i++)
        {
            temp = 0;
            for(int j = 0; j<words[i].size(); j++)
            {
                char c = words[i][j];
                copy[c - 'a']--;
                if(copy[c - 'a']>=0) temp += 1;
                if(copy[c - 'a']<0)
                {
                    temp = 0;
                    break;
                }
            }
            cout<<temp<<endl;
            ans += temp;
            copy = freq;
        }
        return ans;
    }

    //Another Correct Approach: 
    // int countCharacters(vector<string>& words, string chars) {
    // int cnt[26] = {}, res = 0;
    // for (auto ch : chars) 
    //     ++cnt[ch - 'a'];
    // for (auto &w : words) {
    //     int cnt1[26] = {}, match = true;
    //     for (auto ch : w)
    //     if (++cnt1[ch - 'a'] > cnt[ch - 'a']) {
    //         match = false;
    //         break;
    //     }
    //     if (match) 
    //         res += w.size();
    //     }
    //     return res;
    // }
};
