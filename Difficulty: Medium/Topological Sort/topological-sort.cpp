class Solution {
  public:
    void dfs(int src, vector<int>& vis, vector<vector<int>>& graph ,stack<int>& st)
    {
        vis[src]=1;
        
        
        for(auto ele:graph[src])
        {
            if(!vis[ele])
            {
                dfs(ele,vis,graph,st);
            }
        }
        st.push(src);
    }
    vector<int> topoSort(int V, vector<vector<int>>& edges) {
        
        
        // code here
        
        vector<vector<int>> graph(V);
        
        for(int i=0;i<edges.size();i++)
        {
            int u=edges[i][0];
            int v=edges[i][1];
            
            graph[u].push_back(v);
        }
        
        //graph ready
        
        
        vector<int> topo;
        stack<int> st;
        
        vector<int> vis(V,0);
        
        
        for(int i=0;i<V;i++)
        {
            if(!vis[i])
            {
                dfs(i,vis,graph,st);
            }
        }
        
        while(!st.empty())
        {
            topo.push_back(st.top());
            st.pop();
        }
        
        return topo;
        
    }
};