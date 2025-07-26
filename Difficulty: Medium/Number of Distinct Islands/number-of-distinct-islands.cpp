// User function Template for C++

class Solution {
  public:
    void dfs(int r,int c,vector<vector<int>>& vis,vector<vector<int>>& grid,vector<pair<int,int>>& v,int r0,int c0)
    {
        vis[r][c]=1;
        v.push_back({r-r0,c-c0});
        int n=grid.size();
        int m=grid[0].size();
        
        int dx[]={-1,0,1,0};
        int dy[]={0,1,0,-1};
        
        
        
        for(int i=0;i<4;i++)
        {
            int nr=r+dx[i];
            int nc=c+dy[i];
            
            if(nr>=0 && nc>=0 && nr<n && nc<m && !vis[nr][nc] && grid[nr][nc]==1)
            {
                dfs(nr,nc,vis,grid,v,r0,c0);
            }
            
        }
    }
    int countDistinctIslands(vector<vector<int>>& grid) {
        // code here
        
        int n=grid.size();
        int m=grid[0].size();
        
        vector<vector<int>> vis(n,vector<int>(m,0));
        
        set<vector<pair<int,int>>> st;
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(!vis[i][j] && grid[i][j]==1)
                {
                    vector<pair<int,int>> v;
                    dfs(i,j,vis,grid,v,i,j);
                    st.insert(v);
                }
            }
        }
        
        return st.size();
        
    }
};
