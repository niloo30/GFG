class Solution {
  public:
    vector<int> sieve(int n) {
        // code here
        
        vector<int> arr(n+1,1);
        vector<int> ans;
        for(int i=2;i*i<=n;i++)
        {
            for(int j=i*i;j<=n;j+=i)
            {
                arr[j]=0;
            }
        }
        for(int i=2;i<=n;i++)
        if(arr[i])
        ans.push_back(i);
        
        return ans;
    }
};