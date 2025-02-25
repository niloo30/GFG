//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    vector<int> f1(vector<int>& arr)
    {
        int n=arr.size();
        vector<int> nse(n);
        stack<int> st;
        
        for(int i=n-1;i>=0;i--)
        {
            while(st.size() && arr[st.top()]>=arr[i])
            st.pop();
            
            if(st.size()==0)
            nse[i]=n;
            else
            nse[i]=st.top();
            
            st.push(i);
            
        }
        
        return nse;
    }
    
    vector<int> f2(vector<int>& arr)
    {
        int n=arr.size();
        vector<int> pse(n);
        stack<int> st;
        
        for(int i=0;i<n;i++)
        {
            while(st.size() && arr[st.top()]>=arr[i])
            st.pop();
            
            if(st.size()==0)
            pse[i]=-1;
            else
            pse[i]=st.top();
            
            st.push(i);
            
        }
        
        return pse;
    }
    int getMaxArea(vector<int> &arr) {
        // Your code here
        
        int n=arr.size();
        vector<int> nse=f1(arr);
        vector<int> pse=f2(arr);
        
        //area arr[i] *(nse[i]-pse[i]-1);
        //maximum
        int ans=0;
        
        for(int i=0;i<n;i++)
        {
            int h=arr[i];
            int w=(nse[i]-pse[i])-1;
            
            int area=h*w;
            
            ans=max(ans,area);
        }
        
        return ans;
    }
};



//{ Driver Code Starts.

int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution obj;
        int res = obj.getMaxArea(arr);
        cout << res << endl;
        cout << "~" << endl;
        // string tl;
        // getline(cin, tl);
    }
    return 0;
}

// } Driver Code Ends