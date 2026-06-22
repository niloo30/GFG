class Solution {
  public:
     int dx[4]={-1,+1,0,0};
    int dy[4]={0,0,-1,+1};

    void bfs(int i,int j,vector<vector<int>>& vis,vector<vector<int>>& grid)
    {
        //make all the 1's as 0's 
        int n=vis.size();
        int m=vis[0].size();

        queue<pair<int,int>> q;
        q.push({i,j});
        vis[i][j]=1;


        while(!q.empty())
        {
            int row=q.front().first;
            int col=q.front().second;

            q.pop();

            for(int i=0;i<4;i++)
            {
                int nrow=row+dx[i];
                int ncol=col+dy[i];

                if(nrow>=0 && nrow<n && ncol>=0 && ncol<m &&grid[nrow][ncol]==1 && !vis[nrow][ncol])
                {
                    q.push({nrow,ncol});
                    vis[nrow][ncol]=1;
                }
            }

        }

    }
    int countGroups(vector<vector<int>>& grid) {
        
        
        // code here
        
        int n=grid.size();
        int m=grid[0].size();

        //bfs 

        int ans=0;

        vector<vector<int>> vis(n,vector<int>(m,0));


        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]==1 and vis[i][j]==0)
                {
                    //start bfs from this point 
                    ans++;
                    bfs(i,j,vis,grid);
                }
            }
        }

        return ans;
        
    }
};