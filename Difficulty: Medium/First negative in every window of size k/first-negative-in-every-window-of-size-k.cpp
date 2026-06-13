class Solution {
  public:
    vector<int> firstNegInt(vector<int>& arr, int k) {
        // write code here
        int n=arr.size();
        
        queue<int> q;
        
        vector<int> ans;
        int i=0,j=0;
        
        while(j<n){
            
            if(arr[j]<0)
            q.push(arr[j]);
            
            if(j-i+1==k){
                if(q.empty())
                ans.push_back(0);
                else
                ans.push_back(q.front());
                
                
                if(arr[i]<0)
                q.pop();
                i++;
            }
            
            j++;
        }
        
        return ans;
    }
};