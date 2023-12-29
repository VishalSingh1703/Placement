https://leetcode.com/problems/course-schedule/


class Solution {
public:
    bool canFinish(int n, vector<vector<int>>& adj) 
    {
        vector<int> indegree(n, 0);
        for(int i = 0; i<n; i++)
        {
            for(int it : adj[i]) indegree[it]++;
        }
        queue<int> q;
        for(int i = 0; i<n; i++)
        {
            if(indegree[i] == 0) q.push(i);
        }
        vector<int> topo;
        while(!q.empty())
        {
            int node = q.front();
            q.pop();
            topo.push_back(node);
            for(int it : adj[node]) if(--indegree[it] == 0) q.push(it);
        }
        return topo.size() == n;
    }
};
