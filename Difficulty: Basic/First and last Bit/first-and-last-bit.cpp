//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

// User function template for C++
class Solution {
  public:
    int ispowerof2(int n)
    {
        return ((n&(n-1))==0);
    }
    int onlyFirstAndLastAreSet(long long int n) {
        // complete the function here
        
        
        if(n==1)
        return 1;
        
        if(n==2)
        return 0;
        return ispowerof2(n-1);
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        Solution ob;
        cout << ob.onlyFirstAndLastAreSet(n) << endl;
    
cout << "~" << "\n";
}
    
return 0;
}


// } Driver Code Ends