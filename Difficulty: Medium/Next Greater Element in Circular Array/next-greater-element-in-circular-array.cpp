class Solution {
  public:
    vector<int> nge(vector<int>& arr,stack<int>& st)
    {
        int n=arr.size();
        
        vector<int> ans(n);
        for(int i=n-1;i>=0;i--)
        {
            while(st.size() && arr[i]>=st.top())
            st.pop();
            
            if(st.size()==0)
            ans[i]=-1;
            else
            ans[i]=st.top();
            
            st.push(arr[i]);
        }
        return ans;
    }
    vector<int> nextGreater(vector<int> &arr) {
        // code here
        stack<int> st;
        int n=arr.size();
        
        for(int i=n-1;i>=0;i--)
        st.push(arr[i]);
        
        vector<int> ans=nge(arr,st);
        
        return ans;
    }
};