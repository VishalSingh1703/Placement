https://leetcode.com/problems/find-first-palindromic-string-in-the-array/description/?envType=daily-question&envId=2024-02-13


// class Solution {
// public:
//     bool isPal(string s)
//     {
//         if(s.size()<2) return true;
//         if(s[0]!=s[s.length()-1]) return false;
//         return isPal(s.substr(1, s.length()-2));
//     }
//     string firstPalindrome(vector<string>& words) 
//     {
//         for(string word : words)
//         {
//             if(isPal(word)) return word;
//         }
//         return "";
//     }
// };


// faster runtime 
int foo = []()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();

static const auto _ = [](){
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    return 0;
}();

class Solution {
public:
    bool checkPal(string temp) {
        int n = temp.size();
        for (int i =0; i<n/2; i++) 
        {
            if (temp[i] != temp[n-i-1]) return false;
        }
        return true;
    }
    string firstPalindrome(vector<string>& words) 
    {
        for (auto i:words) if(checkPal(i)) return i;
        return "";
    }
};
