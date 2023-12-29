https://leetcode.com/problems/course-schedule-ii/


class Solution {
public:
    vector<int> findOrder(int n, vector<vector<int>>& adj) 
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
        return topo;
    }
};


//////       Second Solution      ////////


class Solution {
public:
    vector<int> findOrder(int n, vector<vector<int>>& prerequisites) 
    {
        vector<vector<int>> adj(n);
        vector<int> degree(n, 0), topo, emp;
        for (auto& e : prerequisites)
            adj[e[1]].push_back(e[0]), degree[e[0]]++;
        for (int i = 0; i < n; ++i) if (!degree[i]) topo.push_back(i);
        for (int i = 0; i < topo.size(); ++i)
            for (int j: adj[topo[i]])
                if (--degree[j] == 0) topo.push_back(j);
        return (topo.size() == n ) ? topo : emp;
    }
};
