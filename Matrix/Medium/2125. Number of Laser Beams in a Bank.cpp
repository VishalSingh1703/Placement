https://leetcode.com/problems/number-of-laser-beams-in-a-bank/?envType=daily-question&envId=2024-01-03


// class Solution {
// public:
//     int numberOfBeams(vector<string>& bank) 
//     {
//         int prev = 0, next = 0, total = 0;
//         for(int i = 0; i<bank.size(); i++)
//         {
//             if(next) prev = next;
//             next = 0;
//             for(int j = 0; j<bank[0].size(); j++) if(bank[i][j]>'0') next++;
//             total += prev*next;
//         }
//         return total;
//     }
// };


class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        ios_base::sync_with_stdio(false); cin.tie(NULL);
        if(bank.size() < 2) return 0;
        // prev records the last row with prev > 0 devices.
        // upon detecting the next row with next > 0 devices,
        // prev * next beams are created. now next becomes the
        // last row with non-zero devices (prev).
        int ans = 0, prev = 0;
        for (int i = 0; i < bank.size(); i++) {
            int next = 0;
            for (char cell: bank[i]) next += (cell - '0');
            if (next) 
            {
                ans += prev ? prev * next : 0;
                prev = next;
            }
        }
        return ans;
    }
};
