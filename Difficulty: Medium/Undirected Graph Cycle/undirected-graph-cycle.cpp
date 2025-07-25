class Solution {
  public:
    bool isCycle(int V, vector<vector<int>>& edges) {
        // Code here
        
        vector<vector<int>> adj(V);
        
        for(auto ele: edges)
        {
            int u=ele[0];
            int v=ele[1];
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        
        vector<int> vis(V,0);
        for(int i=0;i<V;i++)
        {
            if(!vis[i])
            {
                queue<pair<int,int>> q;
                q.push({i,-1}); // ele, parent->from which node it came from 
                vis[i]=1;
        
                while(!q.empty())
                {
                    int ele=q.front().first;
                    int parent=q.front().second;
                    
                    q.pop();
                    
                    for(auto it: adj[ele])
                    {
                        if(it!=parent)
                        {
                            if(vis[it])
                            return true;
                            
                            vis[it]=1;
                            q.push({it,ele});
                        }
                    }
                }
                
            }
            
        }
        
        return false;
    }
};