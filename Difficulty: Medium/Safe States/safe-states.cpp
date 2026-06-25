class Solution {
  public:
    bool dfs(int src,vector<int>& vis,vector<int>& pathvis,vector<vector<int>>& graph)
    {
        vis[src]=1;
        pathvis[src]=1;
        
        
        for(auto ele:graph[src])
        {
            if(!vis[ele])
            {
                if(dfs(ele,vis,pathvis,graph))
                return true;
            }
            else if(pathvis[ele]==1)
            return true;
        }
        
        pathvis[src]=0;
        return false;
    }
    vector<int> safeNodes(int V, vector<vector<int>>& edges) {
        // Code here
         vector<vector<int>> graph(V);
        
        for(int i=0;i<edges.size();i++)
        {
            int u=edges[i][0];
            int v=edges[i][1];
            
            graph[u].push_back(v);
        }
        
        //graph is ready 
        
        vector<int> vis(V,0);
        vector<int> pathvis(V,0);
        
        
        for(int i=0;i<V;i++)
        {
            // if(!vis[i])
            // {
                (dfs(i,vis,pathvis,graph));
                
            // }
        }
        vector<int> ans;
        
        for(int i=0;i<V;i++)
        {
            if(pathvis[i]==0)
            ans.push_back(i);
        }
        return ans;
    }
};