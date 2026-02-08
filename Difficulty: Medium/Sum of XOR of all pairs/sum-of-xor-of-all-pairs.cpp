

class Solution {
  public:
    // Returns sum of bitwise OR
    // of all pairs
    #define ll long long
    long long int sumXOR(int arr[], int n) {
        // Complete the function
        
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
            ll x=ones*zeroes;
            ans = ans+ x* (1LL<<i);
            
        }
        
        return ans;
    }
};