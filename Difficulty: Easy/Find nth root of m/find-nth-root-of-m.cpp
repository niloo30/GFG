class Solution {
  public:
    bool check(int mid,int n,int m)
    {
        long long val=pow(mid,n);
        if(val>m)
        return false;
        return val<=m;
        
        
    }
    int nthRoot(int n, int m) {
        // Code here.
        
        int l=1;
        int h=m;
        int ans=-1;
        while(l<=h)
        {
            int mid=(l+(h-l)/2);
            
            if(check(mid,n,m))
            {
                
                l=mid+1;
            }
            else
                h=mid-1;
        }
        if(pow(h,n)==m)
        return h;
        return ans;
    }
};