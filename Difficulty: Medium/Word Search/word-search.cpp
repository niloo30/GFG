class Solution {
  public:
    bool f(vector<vector<char>>& arr,int i,int j,string s,int idx)
    {
        if(idx>=s.size())
        return true;
        
        if(i<0 || j<0 || i>=arr.size() || j>=arr[0].size())
        return false;
        
        if(arr[i][j]!=s[idx])
        return false;
        
        char ch=arr[i][j];
        arr[i][j]='*';
        
        bool ans= f(arr,i+1,j,s,idx+1) || f(arr,i-1,j,s,idx+1) || f(arr,i,j+1,s,idx+1) ||f(arr,i,j-1,s,idx+1);
        
        arr[i][j]=ch;
        
        
        return ans;
        
        
        
    }
    bool isWordExist(vector<vector<char>>& mat, string& word) {
        // Code here
        
        int n=mat.size();
        int m=mat[0].size();
        bool ans=false;
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                ans=(ans || f(mat,i,j,word,0));
                
            }
        }
        
        return ans;
    }
};
