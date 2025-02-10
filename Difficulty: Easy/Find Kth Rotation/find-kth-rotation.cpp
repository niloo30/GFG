//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:
    int check(int mid,vector<int>& nums)
    {
       // if(mid==0)return 1;
        if(nums[mid]<nums[0])
        return 1;
        return 0;
    }
    int findKRotation(vector<int> &nums) {
        // Code Here
        
        int l=0;
        int h=nums.size()-1;
        int ans=0;
        while(l<=h)
        {
            int mid=(l+h)/2;
            if(check(mid,nums)==1)
            {
                ans=mid;
                h=mid-1;
            }
            else
            l=mid+1;

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
        vector<int> arr;
        string input1;
        getline(cin, input1);
        stringstream ss1(input1);
        int number1;
        while (ss1 >> number1) {
            arr.push_back(number1);
        }
        Solution ob;
        int res = ob.findKRotation(arr);
        cout << res << endl;
        cout << "~" << endl;
    }
}

// } Driver Code Ends