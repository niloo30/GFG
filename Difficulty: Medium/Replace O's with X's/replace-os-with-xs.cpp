class Solution {
  public:
    void fill(vector<vector<char>>& board) {
        // Code here
        
        int m=board.size();
        int n=board[0].size();

        vector<vector<int>> vis(m,vector<int>(n,0));

        queue<pair<int,int>> q;

        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(board[i][j]=='O')
                {
                    if(i==0 || i==m-1 || j==0 || j==n-1)
                    {
                        vis[i][j]=1;
                        q.push({i,j});
                    }
                }
            }
        }
        int dx[]={-1,0,1,0};
        int dy[]={0,1,0,-1};

        while(!q.empty())
        {
            int r=q.front().first;
            int c=q.front().second;

            q.pop();
            for(int i=0;i<4;i++)
            {
                int new_r=r+dx[i];
                int new_c=c+dy[i];

                if(new_r>=0 && new_r<m && new_c>=0 && new_c<n && board[new_r][new_c]=='O')
                {
                    if(!vis[new_r][new_c])
                    {
                        vis[new_r][new_c]=1;
                        q.push({new_r,new_c});
                    }
                }
            }
        }

        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(board[i][j]=='O' && !vis[i][j])
                {
                    board[i][j]='X';
                }
            }
        }
        return ;
        
    }
};