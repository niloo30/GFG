class Solution {
  public:
    vector<int> bfs(vector<vector<int>> &adj) {
        // code here
        
        int n=adj.size();
        
        vector<int> vis(n);
        
        int start=0;
        
        
        vector<int> ans;
        queue<int> q;
        
        q.push(start);
        vis[start]=1;
        
        
        while(!q.empty())
        {
            int node=q.front();
            q.pop();
            
            ans.push_back(node);
            
            for(auto nei:adj[node])
            {
                if(!vis[nei])
                {
                    q.push(nei);
                    vis[nei]=1;
                }
            }
            
        }
        return ans;
        

    }
};