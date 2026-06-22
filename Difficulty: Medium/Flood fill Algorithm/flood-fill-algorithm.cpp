class Solution {
  public:
    int dx[4]={-1,+1,0,0};
    int dy[4]={0,0,-1,+1};

    void bfs(int i,int j,vector<vector<int>>& vis,vector<vector<int>>& image,int newColor)
    {
        //make all the 1's as 0's 
        int n=vis.size();
        int m=vis[0].size();

        queue<pair<int,int>> q;
        q.push({i,j});
        vis[i][j]=1;
        int prevColor=image[i][j];
        image[i][j]=newColor;

        while(!q.empty())
        {
            int row=q.front().first;
            int col=q.front().second;

            q.pop();

            for(int i=0;i<4;i++)
            {
                int nrow=row+dx[i];
                int ncol=col+dy[i];

                if(nrow>=0 && nrow<n && ncol>=0 && ncol<m &&image[nrow][ncol]==prevColor && !vis[nrow][ncol])
                {
                    image[nrow][ncol]=newColor;
                    q.push({nrow,ncol});
                    vis[nrow][ncol]=1;
                }
            }

        }

    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc,int newColor) {
        // code here
        
        int n=image.size();
        int m=image[0].size();
        
        vector<vector<int>> vis(n,vector<int>(m,0));
        
        bfs(sr,sc,vis,image,newColor);
        return image;
    }
};