//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    vector<int> maxOfSubarrays(vector<int>& nums, int k) {
        // code here
         
        int n=nums.size();
        vector<int> ans;
        deque<int> q;
        for(int i=0;i<n;i++)
        {
            while(q.size() && q.front()<=i-k) //step 1
            q.pop_front();


            while(q.size() && nums[i]>nums[q.back()]) //step 2
            q.pop_back();

        q.push_back(i);//step 3

        if(i>=k-1)
        ans.push_back(nums[q.front()]);//step 4

        }
        

        return ans;
        
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // Ignore newline character after t

    while (t--) {
        vector<int> arr;
        int k;
        string inputLine;

        getline(cin, inputLine); // Read the array input as a line
        stringstream ss(inputLine);
        int value;
        while (ss >> value) {
            arr.push_back(value);
        }

        cin >> k;
        cin.ignore(); // Ignore newline character after k input

        Solution obj;
        vector<int> res = obj.maxOfSubarrays(arr, k);
        for (int i = 0; i < res.size(); i++)
            cout << res[i] << " ";
        cout << endl;
        cout << "~"
             << "\n";
    }

    return 0;
}

// } Driver Code Ends