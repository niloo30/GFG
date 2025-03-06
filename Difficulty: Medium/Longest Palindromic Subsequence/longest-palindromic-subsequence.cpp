//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function Template for C++

class Solution {
  public:
    int solve(string& s1,string& s2,int i,int j,vector<vector<int>>& dp)
    {
        if(i<0 || j<0)return 0;

        if(dp[i][j]!=-1)return dp[i][j];

        int common=0;
        int notcommon=0;
        if(s1[i]==s2[j])
        common=1+solve(s1,s2,i-1,j-1,dp);

        notcommon=max(solve(s1,s2,i-1,j,dp),solve(s1,s2,i,j-1,dp));

        return dp[i][j]=max(common,notcommon);
    }
    int longestPalinSubseq(string &s) {
        // code here
        string text1=s;
        string text2=s;
        reverse(text2.begin(),text2.end());
        int n=text1.size();
        int m=text2.size();

        vector<vector<int>> dp(n+1,vector<int>(m+1,-1));
        return solve(text1,text2,n-1,m-1,dp);
        
        
    }
};



//{ Driver Code Starts.

int32_t main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution ob;
        cout << ob.longestPalinSubseq(s) << endl;

        cout << "~"
             << "\n";
    }
}

// } Driver Code Ends