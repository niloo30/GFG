class Solution {
  public:
    vector<int> ans;
    void dfs(int ele ,vector<int>& vis,vector<vector<int>>& adj)
    {
        ans.push_back(ele);
        vis[ele]=1;
        
        for(auto it:adj[ele])
        {
            if(!vis[it])
            dfs(it,vis,adj);
        }
    }
    vector<int> dfs(vector<vector<int>>& adj) {
        // Code here
        
        int n=adj.size();
        vector<int> vis(n,0);
        
        ans.push_back(0);
        vis[0]=1;
        
        for(auto ele: adj[0])
        {
            if(!vis[ele])
            {
                dfs(ele,vis,adj);
            }
        }
        return ans;
        
        
    }
};