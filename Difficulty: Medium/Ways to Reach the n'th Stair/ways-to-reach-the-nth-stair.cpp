//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
    //Function to count number of ways to reach the nth stair.
    
    int stair(int n,vector<int>& dp)
    {
        
        if(n<=2)return n;
        if(dp[n]!=-1)
        return dp[n];
        return dp[n]=stair(n-1,dp)+stair(n-2,dp);
    }
    int countWays(int n)
    {
        // your code here
        vector<int> dp(50,-1);
        return stair(n,dp);
    }
};





//{ Driver Code Starts.
int main() {
    // taking total testcases
    int t;
    cin >> t;
    while (t--) {
        // taking stair count
        int m;
        cin >> m;
        Solution ob;
        cout << ob.countWays(m) << endl; // Print the output from our pre computed array

        cout << "~"
             << "\n";
    }
    return 0;
}

// } Driver Code Ends