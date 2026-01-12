
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

