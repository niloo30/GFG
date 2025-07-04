class Solution {
  public:
    void bitManipulation(int num, int i) {
        // your code here
        
        int f=(num&(1<<(i-1)));
        if(f==0)
        cout<<0<<" ";
        else
        cout<<1<<" ";
        
        int s=(num | (1<<(i-1)));
        cout<<s<<" ";
        
        int c=(num &(~(1<<(i-1))));
        cout<<c<<" ";
    }
};