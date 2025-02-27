//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    string removePair(string s) {
        // code here
        int n=s.size();
        
        string ans="";
        
        for(int i=0;i<n;i++)
        {
            char ch=s[i];
            
            if(ans.size()==0 || ans.back()!=ch)
            ans+=ch;
            else
            ans.pop_back();
        }
        
        if(ans.size()==0)
        return "-1";
        
        return ans;
    }
};



//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        string s; 
        cin>>s;
        
        Solution obj;
        string res = obj.removePair(s);
        
        cout<<res<<endl;
        
    
cout << "~" << "\n";
}
}

// } Driver Code Ends