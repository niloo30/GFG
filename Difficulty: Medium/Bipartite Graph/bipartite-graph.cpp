class Solution {
  public:
    bool isBipartite(int V, vector<vector<int>> &edges) {
        // Code here
        vector<vector<int>> graph(V);
        
        int n=edges.size();
        
        for(int i=0;i<n;i++)
        {
            int u=edges[i][0];
            int v=edges[i][1];
            
            graph[u].push_back(v);
            graph[v].push_back(u);
        }
        
        
        
        vector<int> color(V,-1);
        for(int i=0;i<V;i++)
        {
            if(color[i]==-1)
            {
                queue<int> q;
                q.push(i);
                color[i]=0;

                while(!q.empty())
                {
                    int node=q.front();
                    q.pop();

                    for(auto ele:graph[node])
                    {
                        if(color[ele]==-1)
                        {
                            color[ele]=1-color[node];
                            q.push(ele);
                        }
                        else if(color[node]==color[ele])
                        {
                            return false;
                        }
                    }
                }
                

            }
        }
        
        return true;
    }
};