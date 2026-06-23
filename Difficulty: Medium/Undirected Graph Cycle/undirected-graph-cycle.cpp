class Solution {
  public:
    bool detect(int src,vector<int>& vis,vector<vector<int>>& graph)
    {
        queue<pair<int,int>> q; //{ele,parent}
        
        
        q.push({src,-1});
        vis[src]=1;
        
        while(!q.empty())
        {
            int node=q.front().first;
            int parent=q.front().second;
            
            q.pop();
            
            for(auto ele:graph[node])
            {
                if(vis[ele]==0)
                {
                    q.push({ele,node});
                    vis[ele]=1;
                }
                else //vis[ele]==1
                {
                    if(parent!=ele)
                    return true;
                }
            }
        }
        
        return false;
    }
    bool isCycle(int V, vector<vector<int>>& edges) {
        // Code here
        vector<vector<int>> graph(V);
        
        for(int i=0;i<edges.size();i++)
        {
            int u=edges[i][0];
            int v=edges[i][1];
            
            graph[u].push_back(v);
            graph[v].push_back(u);
        }
        
        vector<int> vis(V,0);
        
        for(int i=0;i<V;i++)
        {
            if(!vis[i])
            {
                if(detect(i,vis,graph))
                return true;
            }
        }
        
        return false;
        
        
    }
};