// User function Template for C++

class Solution {
  public:
    void rotate(vector<int> &arr) {
        // code here
        int n=arr.size();
        
        int temp=arr[n-1];
        
        for(int i=n-2;i>=0;i--)
        {
            arr[i+1]=arr[i];
        }
        arr[0]=temp;
        
        return ;
        
    }
};