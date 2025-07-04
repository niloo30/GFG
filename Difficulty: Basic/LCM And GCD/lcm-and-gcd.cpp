class Solution {
  public:
    vector<int> lcmAndGcd(int a, int b) {
        // code here
        
        int g=__gcd(a,b);
        int l=(a*b)/g;
        
        return {l,g};
        
    }
};