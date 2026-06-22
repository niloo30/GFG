class Solution {
  public:
    vector<int> ans;
    void dfs(int node,vector<int>& vis,vector<vector<int>>& adj)
    {
        ans.push_back(node);
        vis[node]=1;
        
        for(auto ele:adj[node])
        {
            if(!vis[ele])
            {
                vis[ele];
                dfs(ele,vis,adj);
            }
        }
    }
    vector<int> dfs(vector<vector<int>>& adj) {
        // Code here
        int n=adj.size();
        
        int start=0;
        vector<int> vis(n,0);
        dfs(start,vis,adj);
        
        return ans;
        
        
        
    }
};