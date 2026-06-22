class Solution {
  public:
    //4 dirs i,j --> i-1,j   i+1,j  i,j-1   i,j+1
    int dx[8]={-1,-1,-1,0,0,1,1,1};
    int dy[8]={-1,0,1,-1,1,-1,0,1};

    void bfs(int i,int j,vector<vector<int>>& vis,vector<vector<char>>& grid)
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

            for(int i=0;i<8;i++)
            {
                int nrow=row+dx[i];
                int ncol=col+dy[i];

                if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && grid[nrow][ncol]=='L' && !vis[nrow][ncol])
                {
                    q.push({nrow,ncol});
                    vis[nrow][ncol]=1;
                }
            }

        }

    }
    int countIslands(vector<vector<char>>& grid) {
        // Code here
        
        int n=grid.size();
        int m=grid[0].size();

        //bfs 

        int ans=0;

        vector<vector<int>> vis(n,vector<int>(m,0));


        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]=='L' and vis[i][j]==0)
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