// User function Template for C++
class Solution {
  public:
    int lowerBound(vector<int>& arr, int target) {
        // code here
        
        
        return lower_bound(arr.begin(),arr.end(),target)-arr.begin();
        
        
    }
};
