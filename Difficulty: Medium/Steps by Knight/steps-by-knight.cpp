class Solution {
  public:
    int dx[8] = { -2, -1, 1, 2, -2, -1, 1, 2 };
    int dy[8] = { -1, -2, -2, -1, 1, 2, 2, 1 };
    int minStepToReachTarget(vector<int>& knightPos, vector<int>& targetPos, int n) {
        // Code here
        
        int x=knightPos[0]-1;
        int y=knightPos[1]-1;
        
        
        int tx=targetPos[0]-1;
        int ty=targetPos[1]-1;
        
        queue<pair<pair<int,int>,int>> q;
        
        q.push({{x,y},0});
        
        vector<vector<int>> vis(n,vector<int>(n,0));
        
        vis[x][y]=1;
        
        while(!q.empty())
        {
            
            int r=q.front().first.first;
            int c=q.front().first.second;
            
            int dist=q.front().second;
            
            q.pop();
            
            if(r==tx && c==ty)
            return dist;
            
            
            for(int i=0;i<8;i++) 
            {
               
                    
                    int newr=r+dx[i];
                    int newc=c+dy[i];
                    
                    if(newr>=0 && newc>=0 && newr<n && newc<n && !vis[newr][newc]) {
                        vis[newr][newc]=1;
                        
                        q.push({{newr,newc},dist+1});
                    }
                    
                }
                
        }
            
            return 0;
        
    
    }
};