class Solution {
  public:
    int countFreq(vector<int>& nums, int target) {
        // code here
        
        int n=nums.size();
        int f=lower_bound(nums.begin(),nums.end(),target)-nums.begin();

        if(f==n || nums[f]!=target)
        return 0;

        int s=upper_bound(nums.begin(),nums.end(),target)-nums.begin();
        s--;
        
        return s-f+1;

        
        
    }
};
