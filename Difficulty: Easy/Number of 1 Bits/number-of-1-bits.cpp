//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int setBits(int n) {
        // Write Your Code here
        int ans=0;
        
        while(n)
        {
            ans++;
            n=(n &(n-1));
        }
        return ans;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;

        Solution ob;
        int cnt = ob.setBits(N);
        cout << cnt << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}

// } Driver Code Ends