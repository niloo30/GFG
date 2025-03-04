//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    static bool cmp(pair<int,int> a,pair<int,int> b)
    {
        return a.second<b.second;
    }
    int activitySelection(vector<int> &start, vector<int> &end) {
        // Your code here
        
        vector<pair<int,int>> arr;
        for(int i=0;i<end.size();i++)
        {
            arr.push_back({start[i],end[i]});
        }
        
        sort(arr.begin(),arr.end(),cmp);
        
        int ans=1;
        int last=arr[0].second;
        for(int i=1;i<arr.size();i++)
        {
            if(arr[i].first>last)
            {
                ans++;
                last=arr[i].second;
                
            }
            
        }
        
        return ans;        
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        string input;
        getline(cin, input);
        stringstream ss(input);
        vector<int> start;
        int num;
        while (ss >> num)
            start.push_back(num);
        getline(cin, input);
        ss.clear();
        vector<int> end;
        ss.str(input);
        while (ss >> num)
            end.push_back(num);

        Solution obj;
        cout << obj.activitySelection(start, end) << endl;
        cout << "~\n";
    }
    return 0;
}
// } Driver Code Ends