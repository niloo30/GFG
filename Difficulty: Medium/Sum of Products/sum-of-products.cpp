// User function template for C++

class Solution {
  public:
    #define ll long long 
    long long pairAndSum(int n, long long arr[]) {
        // code here
        ll ans=0;
        
        for(int i=0;i<32;i++)
        {
            ll ones=0;
            ll zeroes=0;
            for(int j=0;j<n;j++)
            {
                int val=((1<<i) & arr[j]);
                if(val)
                ones++;
                else
                zeroes++;
                
            }
            ll x=ones*(ones-1)/2;
            ans = ans+ x* (1LL<<i);
            
        }
        
        return ans;
    }
};