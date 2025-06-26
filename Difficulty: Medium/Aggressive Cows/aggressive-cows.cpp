// User function Template for C++

class Solution {
  public:
    bool check(int mid,vector<int>& arr,int k)
    {
        int cows=1;
        int prev=arr[0];
        
        for(int i=1;i<arr.size();i++)
        {
            if(prev+mid<=arr[i])
            {
                cows++;
                prev=arr[i];
            }
        }
        return cows>=k;
    }
    int aggressiveCows(vector<int> &arr, int k) {

        // Write your code here
        sort(arr.begin(),arr.end());
        int n=arr.size();
        int l=1;
        int h=1e9;
        
        int ans=-1;
        
        while(l<=h)
        {
            int mid=(l+(h-l)/2);
            
            if(check(mid,arr,k))
            {
                ans=mid;
                l=mid+1;
            }
            else
            h=mid-1;
        }
        return ans;
        
    }
};