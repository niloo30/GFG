//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

// User function Template for C++
class Solution {
  public:
    int findLargestSubarray(int arr[], int n){
    // code here
    
    int gcd=arr[0];
    
    for(int i=1;i<n;i++)
    gcd=__gcd(gcd,arr[i]);
    
    if(gcd==1)
    return n;
    
    return -1;
}
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) cin >> arr[i];
        Solution ob;
        cout << ob.findLargestSubarray(arr, n) << endl;
    
cout << "~" << "\n";
}
    return 0;
}

// } Driver Code Ends