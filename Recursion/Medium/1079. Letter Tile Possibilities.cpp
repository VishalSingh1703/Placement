https://leetcode.com/problems/letter-tile-possibilities/


class Solution {
public:

    void solve(int count[26], int &ans)
    {
        for(int i = 0; i < 26; i++)
        {
            if(count[i])
            {
                count[i]--;
                ans++;
                solve(count, ans);
                count[i]++;
            }
        }
    }

    int numTilePossibilities(string tiles) 
    {
        int count[26] {};
        for(const auto &c : tiles) count[c - 'A']++;
        int ans = 0;
        solve(count, ans);
        return ans;
    }
};


class Solution {
public:

    void solve(string tiles, string &temp, set<string> &ans, vector<bool> &used)
    {
        if(!temp.empty()) ans.insert(temp);

        for(int i = 0; i < tiles.size(); i++)
        {
            if(used[i]) continue;

            used[i] = true;
            temp.push_back(tiles[i]);
            solve(tiles, temp, ans, used);
            used[i] = false;
            temp.pop_back();
        }
    }

    int numTilePossibilities(string tiles) 
    {
        set<string> ans;
        vector<bool> used(tiles.size(), false);
        string temp = "";
        solve(tiles, temp, ans, used);
        return ans.size();
    }
};
