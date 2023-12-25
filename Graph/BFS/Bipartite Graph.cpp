


class Solution {
public:
    bool isBipartite(vector<vector<int>>& graph) {
        int n = graph.size();
        vector<int> colors(n, 0);
        queue<int> q;
        
        for (int i = 0; i < n; i++) {
            if (colors[i]) continue;
            
            colors[i] = 1;
            q.push(i);
            
            while (!q.empty()) {
                int temp = q.front();
                
                for (auto neighbor : graph[temp]) {
                    
					// Color neighbor with opposite color
                    if (!colors[neighbor]){
                        colors[neighbor] = -colors[temp];
                        q.push(neighbor);
                    }
                    
					// If the neighbor has the same color - can't bipartite.
                    else if (colors[neighbor] == colors[temp]) 
                        return false;
                }
                q.pop();
            }
        }
        return true;
    }
};

// class Solution {
// public:
//     bool isBipartite(vector<vector<int>>& graph) {
//         vector<int> color(graph.size(), -1);
//         int start = 0;
//         color[start] = 1;
//         queue<int> q;
//         q.push(start);
//         while(!q.empty())
//         {
//             int node = q.front();
//             q.pop();
//             for(int i : graph[node])
//             {
//                 if(color[node] == color[i]) return false;
//                 else if(color[i]==-1)
//                 { 
//                     q.push(i);
//                     color[i] = !color[node];
//                 }
//             }
//         }
//         return true;
//     }
// };
