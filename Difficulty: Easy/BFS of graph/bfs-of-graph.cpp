class Solution {
  public:
    // Function to return Breadth First Traversal of given graph.
    vector<int> bfs(vector<vector<int>> &adj) {
        // Code here
        
        
        int n=adj.size();
        
        vector<int> vis(n+1,0);
        queue<int> q;
        vector<int> ans;
        q.push(0);
        vis[0]=1;
        
        while(!q.empty())
        {
            int node=q.front();;
            q.pop();
            ans.push_back(node);
            
            for(auto ele:adj[node])
            {
                if(!vis[ele])
                {
                    q.push(ele);
                    vis[ele]=1;
                }
            }
        }
        
        return ans;
    }
};