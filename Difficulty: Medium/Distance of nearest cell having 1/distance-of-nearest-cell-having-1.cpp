class Solution {
  public:
    vector<vector<int>> nearest(vector<vector<int>>& mat) {
        // code here
        int m=mat.size();
        int n=mat[0].size();

        vector<vector<int>> vis(m,vector<int>(n,0));
        vector<vector<int>> ans(m,vector<int>(n));
        //{{row,col},dist}
        queue<pair<pair<int,int>,int>> q;

        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(mat[i][j]==1)
                {
                    q.push({{i,j},0});
                    vis[i][j]=1;
                }
                
            }
        }

        vector<int> dx={-1,0,1,0};
        vector<int> dy={0,1,0,-1};

        while(!q.empty())
        {
            int i=q.front().first.first;
            int j=q.front().first.second;
            int dist=q.front().second;

            q.pop();
            
            ans[i][j]=dist;

            for(int k=0;k<4;k++)
            {
                int new_i=i+dx[k];
                int new_j=j+dy[k];

                
                    if(new_i>=0 && new_i<m && new_j>=0 && new_j<n && !vis[new_i][new_j])
                    {
                        q.push({{new_i,new_j},dist+1});
                        vis[new_i][new_j]=1;

                    }
                
            }
        }

        return ans;
    }
};