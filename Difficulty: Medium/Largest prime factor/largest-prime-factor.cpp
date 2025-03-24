//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int largestPrimeFactor(int n) {
        // code here
        
        vector<int> ans;
        
        for(int i=2;i<=n;i++)
        {
            while(n%i==0)
            {
                ans.push_back(i);
                n/=i;
            }
        }
        
        
        return ans.back();
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
        cout << ob.largestPrimeFactor(N) << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends