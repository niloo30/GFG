//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    string LCP(string a[], int n)
    {
        // code here
        sort(a,a+n);
        
        //sorted 
        //compare first and last
        
        string f=a[0];
        string l=a[n-1];
        
        string ans="";
        int i=0;int j=0;
        while(i<f.size() && j<l.size())
        {
            if(f[i]==l[j])
            {
                ans+=f[i];
                i++;
                j++;
                
            }
            else
            break;
        }
        
        if(ans.size()==0)
        return "-1";
        
        return ans;
    }
};

//{ Driver Code Starts.

int main() 
{

	int t;
	cin>>t;
	while(t--)
	    {
	        int n;
	        cin>>n;
	        string arr[n];
	        for(int i = 0;i<n;i++)
	            cin>>arr[i];
	        Solution ob;
	        cout<<ob.LCP(arr,n)<<endl;
	    
cout << "~" << "\n";
}
	return 0;
}
// } Driver Code Ends