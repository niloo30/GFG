class Solution {
  public:
    int maxSubarrayXOR(vector<int>& arr, int k) {
        // code here
        int ans=0;
        
        int i=0,j=0;
        int n=arr.size();
        
        int x=0;
        
        while(j<n)
        {
            x^=arr[j];
            
            if(j-i+1==k)
            {
                ans=max(ans,x);
                x=x^arr[i];
                i++;
            }
            j++;
        }
        
        return ans;
    }
};