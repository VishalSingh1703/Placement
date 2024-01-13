https://leetcode.com/problems/minimum-number-of-steps-to-make-two-strings-anagram/?envType=daily-question&envId=2024-01-13


// class Solution {
// public:
//     int minSteps(string s, string t) 
//     {
//         unordered_map<char, int> freqs, freqt;
//         for(char i : s) freqs[i]++;
//         for(char i : t) freqt[i]++;
//         int diff = 0;
//         for(auto &[c, i] : freqs) diff += max(0, freqs[c] - freqt[c]);
//         return diff;
//     }
// };

class Solution {
public:
    int minSteps(string s, string t) {
        int m[26]{};
        for (const auto& e : s) ++m[e-'a'];
        for (const auto& e : t) --m[e-'a'];
        return std::accumulate(m, m+26, 0, [] (int acc, int i) {return acc + std::abs(i);})/2;
    }
};
