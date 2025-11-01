class Solution {
  public:
    bool canPair(vector<int> &arr, int k) {
        // Code here.
        
        int n=arr.size();
        
        unordered_map<int,int> mp;
        
        for(int i=0;i<n;i++)
        {
            int curr=arr[i]%k;
            int req=(k-curr)%k;
            
            if(mp.find(req)!=mp.end())
            {
                mp[req]--;
                
                if(mp[req]==0)
                mp.erase(req);
            }
            else
            mp[curr]++;
        }
        return mp.size()==0;
    }
};