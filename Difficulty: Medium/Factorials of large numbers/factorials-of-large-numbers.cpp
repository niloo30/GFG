// User function template for C++

class Solution {
  public:
    void f(vector<int>& arr,int& size,int i)
    {
        int carry=0;
        
        for(int j=0;j<size;j++)
        {
            int res=arr[j]*i;
            res+=carry;
            
            arr[j]=(res)%10;
            carry=res/10;
        }
        
        while(carry>0)
        {
            arr[size]=(carry%10);
            size++;
            carry/=10;
        }
    }
    vector<int> factorial(int n) {
        // code here
        
        
        vector<int> arr(5000,0);
        arr[0]=1;
        int size=1;
        
        for(int i=2;i<=n;i++)
        {
            f(arr,size,i);
        }
        vector<int> ans;
        
        for(int i=size-1;i>=0;i--)
        ans.push_back(arr[i]);
        
        
        return ans;
    }
};