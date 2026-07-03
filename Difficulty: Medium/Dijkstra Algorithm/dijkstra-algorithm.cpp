class Solution {
  public:
    vector<int> dijkstra(int V, vector<vector<int>> &edges, int src) {
        // Code here
        vector<vector<pair<int,int>>> graph(V);
        
        int n=edges.size();
        
        for(int i=0;i<n;i++){
            int u=edges[i][0];
            int v=edges[i][1];
            int w=edges[i][2];
            
            graph[u].push_back({v,w});
            graph[v].push_back({u,w});
        }
        
        vector<int> dist(V,INT_MAX);
        
        dist[src]=0;
        
        priority_queue< pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>>  pq;
        
        //pq ->{dist,node}
        
        pq.push({0,src});
        
        while(!pq.empty()){
            
            int distance=pq.top().first;
            int node=pq.top().second;
            
            pq.pop();
            
            
            for(auto &ele:graph[node]){
                
                int node2=ele.first;
                int distance2=ele.second;
                
                if(distance + distance2 <dist[node2]){
                    
                    dist[node2]=distance +distance2;
                    pq.push({dist[node2],node2});
                    
                }
            }
        }
        
        
        
        
        
        return dist;
    }
};