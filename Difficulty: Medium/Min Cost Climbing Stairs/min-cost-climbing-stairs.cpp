//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

//Back-end complete function Template for C++

class Solution {
  public:
    int f(vector<int>& arr,int i,int n,vector<int>& dp)
    {
        if(i>=n)
        return 0;
        if(dp[i]!=-1)
        return dp[i];
        return dp[i]=arr[i]+min(f(arr,i+1,n,dp),f(arr,i+2,n,dp));
    }
    int minCostClimbingStairs(vector<int>& cost) {
        // Write your code here
        
        int n=cost.size();
        // vector<int> dp1(1000,-1);
        vector<int> dp(n+1,-1);
        
        int ans=min(f(cost,0,n,dp),f(cost,1,n,dp));
        
        return ans;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();

    while (t-- > 0) {
        string str;
        getline(cin, str);

        stringstream ss(str);
        vector<int> arr;
        int num;
        while (ss >> num) {
            arr.push_back(num);
        }
        Solution sln;
        int res = sln.minCostClimbingStairs(arr);
        cout << res << endl;
        cout << "~" << endl;
    }

    return 0;
}
// } Driver Code Ends