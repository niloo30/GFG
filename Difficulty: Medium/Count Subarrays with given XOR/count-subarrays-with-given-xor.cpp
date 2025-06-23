class Solution {
  public:
    long subarrayXor(vector<int> &arr, int k) {
        // code here
        
        int ans=0;
        int n=arr.size();
        
        map<int,int> mp;
        mp[0]=1;
        
        int xr=0;
        for(int ele:arr)
        {
            xr=xr^ele;
            
            if(mp.find(xr^k)!=mp.end())
            ans+=mp[xr^k];
            
            mp[xr]++;
            
        }
        return ans;
        
    }
};