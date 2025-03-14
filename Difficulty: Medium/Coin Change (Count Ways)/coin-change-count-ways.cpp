//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int f(vector<int>& arr,int i,int sum,vector<vector<int>>& dp)
    {
        if(sum<0)
        return 0;
        
        if(sum==0)
        return 1;
        
        
        if(i>=arr.size())
        return sum==0;
        
        if(dp[i][sum]!=-1)
        return dp[i][sum];
        
        int take=0;
        int skip=0;
        
        take=f(arr,i,sum-arr[i],dp);
        skip=f(arr,i+1,sum,dp);
        
        return dp[i][sum]=take+skip;
    }
    int count(vector<int>& coins, int sum) {
        // code here.
        
       // int n=nums.size();
        
        vector<vector<int>> dp(coins.size()+1,vector<int>(sum+1,-1));
        return f(coins,0,sum,dp);
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
        int sum;
        cin >> sum;
        cin.ignore();
        Solution ob;
        cout << ob.count(arr, sum) << endl;
        cout << "~" << endl;
    }

    return 0;
}

// } Driver Code Ends