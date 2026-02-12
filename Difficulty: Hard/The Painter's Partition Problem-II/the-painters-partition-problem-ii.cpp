class Solution {
  public:
    bool check(int mid,vector<int>& arr,int k)
    {
        //painter cannot do more than mid work 
        //can we disrtidute less than mid work to each painter 
        //such thet number of painters less than k
        
        
        int temp_work=0;
        int count=0;
        
        for(int i=0;i<arr.size();i++)
        {
            if(temp_work+arr[i]<=mid)
            {
                temp_work+=arr[i];
            }
            else
            {
                count++;
                temp_work=arr[i];
                
                
            }
            
            if(count>k)
            return false;
            
        }
        if(temp_work)
        count++; //last partition 
        return count<=k;
        
    }
    int minTime(vector<int>& arr, int k) {
        // code here
        int sum=accumulate(arr.begin(),arr.end(),0);
        
        
        int l=*max_element(arr.begin(),arr.end());
        int h=sum;
        
        int ans=sum;
        
        while(l<=h)
        {
            int mid=(l+h)/2;
            
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