// User function Template for C++

class Solution {
  public:
    vector<int> querySum(int n, int arr[], int q, int queries[]) {
        // code here
        
        for(int i=1;i<n;i++)
        arr[i]+=arr[i-1];
        
        vector<int> ans;
        
        for(int i=0;i<2*q;i+=2)
        {
            int l=queries[i]-1;
            int r=queries[i+1]-1;
            
            int val=arr[r];
            if(l-1>=0)
            val-=arr[l-1];
            
            ans.push_back(val);
        }
        return ans;
    }
};