//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

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
    int lcs(string &s1, string &s2) {
        // code here
         int n=s1.size();
        int m=s2.size();

        vector<vector<int>> dp(n+1,vector<int>(m+1,-1));
        return solve(s1,s2,n-1,m-1,dp);
        
    }
};



//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s1, s2;
        cin >> s1 >> s2; // Take both the strings as input
        Solution ob;
        cout << ob.lcs(s1, s2) << endl; // Call the lcs function
        cout << "~\n";
    }
    return 0;
}

// } Driver Code Ends