// User function Template for C++
class Solution {
  public:
    int upperBound(vector<int>& arr, int target) {
        // code here
        
        int ans=upper_bound(arr.begin(),arr.end(),target)-arr.begin();
        
        return ans;
    }
};
