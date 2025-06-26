class Solution {
  public:
    bool check(int mid,vector<int>& arr,int k)
    {
        int count=1;
        int sum=0;
        
        for(int ele:arr)
        {
            if(ele>mid)
            return false;
            
            if(ele+sum<=mid)
            {
                sum+=ele;
            }
            else
            {
                count++;
                sum=ele;
            }
        }
        
        return count<=k;
    }
    int findPages(vector<int> &arr, int k) {
        // code here
        int n=arr.size();
        int l=1;
        int h=1e9;
        if(k>n)
        return -1;
        
        int ans=-1;
        
        while(l<=h)
        {
            int mid=(l+(h-l)/2);
            if(check(mid,arr,k))
            {
                ans=mid;
                h=mid-1;
            }
            else
            l=mid+1;
        }
        
        
        
        return ans;
    }
};