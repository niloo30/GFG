//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    vector<int> firstNegInt(vector<int>& arr, int k) {
        // write code here
        
        int n=arr.size();
        
        vector<int> ans;
        
        queue<int> q;
        
        int i=0,j=0;
        
        while(j<n)
        {
            if(arr[j]<0)
            q.push(j);
            
            if(j-i+1==k)
            {
                if(q.empty())
                ans.push_back(0);
                else
                ans.push_back(arr[q.front()]);
                
                if(q.size() and i==q.front())
                {
                    
                    q.pop();
                }
                
                i++;
            }
            
            j++;
        }
        
        return ans;
    }
};


//{ Driver Code Starts.
int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);
    while (t--) {

        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        string ks;
        getline(cin, ks);
        int k = stoi(ks);
        Solution ob;
        vector<int> ans = ob.firstNegInt(arr, k);
        for (auto it : ans) {
            cout << it << " ";
        }
        cout << endl;
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends