//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function Template for C++

class Solution {
  public:
    bool solve(vector<int>& arr,int sum,int n,vector<vector<int>>& dp){
      if(sum==0)return true;
      if(sum<0)return false;
      if(n==0)return false;
      if(dp[sum][n]!=-1)return dp[sum][n];
      if(arr[n-1]<=sum)
      return dp[sum][n]=solve(arr,sum,n-1,dp) || solve(arr,sum-arr[n-1],n-1,dp);
      else
      return dp[sum][n]=solve(arr,sum,n-1,dp);
      
    }
    bool equalPartition(vector<int> arr) {
        // code here
        
        int n=arr.size();
        int sum=0;
        for(int ele:arr)
        sum+=ele;
        
        if(sum%2)return false;
        vector<vector<int>> dp(sum+1,vector<int>(n+1,-1));
        
        return solve(arr,sum/2,n,dp);
    }
};



//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        if (ob.equalPartition(arr))
            cout << "true\n";
        else
            cout << "false\n";
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends