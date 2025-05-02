//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function template for C++
class Solution {
  public:
    bool check(int mid,vector<int>& arr)
    {
        // if(mid==arr.size()-2)
        // return true;
        if(mid==0)
        return true;
        return arr[mid-1]<arr[mid];
    }
    int findMaximum(vector<int> &arr) {
        // code here
        
        int l=0;
        int h=arr.size()-1;
        int ans=-1;
        
        while(l<=h)
        {
            int mid=l+(h-l)/2;
            
            
            if(check(mid,arr))
            {
                ans=mid;
                l=mid+1;
            }
            else
            h=mid-1;
        }
        
        return arr[ans];
        
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();

    while (t--) {
        vector<int> arr;
        int value;

        // Read the entire line of integers
        string line;
        // cin.ignore(); // Ignore the newline after the test case input
        getline(cin, line);
        stringstream ss(line);

        // Parse integers and add them to the vector
        while (ss >> value) {
            arr.push_back(value);
        }

        Solution ob;
        auto ans = ob.findMaximum(arr);
        cout << ans << "\n";
        cout << "~"
             << "\n";
    }
    return 0;
}

// } Driver Code Ends