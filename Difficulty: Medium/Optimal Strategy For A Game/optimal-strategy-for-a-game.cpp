class Solution {
  public:
    int dp[1001][1001];
    int rec(vector<int>& arr,int i,int j)
    {
        if(i==j)
        return arr[i];
        
        if(dp[i][j]!=-1)
        return dp[i][j];
        
        int ans=max(arr[i]-rec(arr,i+1,j),arr[j]-rec(arr,i,j-1));
        
        return dp[i][j]= ans;
    }
    int maximumAmount(vector<int> &arr) {
        // code here
        int n=arr.size();
        memset(dp,-1,sizeof(dp));
        int diff=rec(arr,0,n-1);
        
        int sum=accumulate(arr.begin(),arr.end(),0);
        int ans=(sum+diff)/2;
        return ans;
        
    }
};