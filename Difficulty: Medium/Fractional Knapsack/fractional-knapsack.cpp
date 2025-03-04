//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// class implemented
/*
struct Item{
    int value;
    int weight;
};
*/
struct Item{
    int value;
    int weight;
};

class Solution {
  public:
    // Function to get the maximum total value in the knapsack.
    static bool cmp(Item a,Item b)
    {
        return (a.value/(1.0*a.weight) > b.value/(1.0*b.weight));
    }
    double fractionalKnapsack(vector<int>& val, vector<int>& wt, int capacity) {
        // Your code here
        
        // vector<Item> arr;
        int n=val.size();
        Item arr[n];
        for(int i=0;i<val.size();i++)
        {
            arr[i]={val[i],wt[i]};
        }
        
        sort(arr,arr+n,cmp);
        
        double ans=0.0;
        int i;
        for( i=0;i<n;i++)
        {
            if(capacity>=arr[i].weight)
            {
                ans+=arr[i].value;
                capacity-=arr[i].weight;
            }
            else
            break;
        }
        
        if(capacity && i<n)
        {
            double ratio=arr[i].value/(arr[i].weight*1.0);
            ans+=(ratio*capacity);
            
        }
        
        return ans;
        
        
        
    }
};



//{ Driver Code Starts.

int main() {

    int t;
    // taking testcases
    cin >> t;
    cin.ignore(); // to ignore the newline after the number of test cases
    cout << setprecision(6) << fixed;

    while (t--) {
        // Reading the value array
        vector<int> values;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            values.push_back(number);
        }

        // Reading the weight array
        vector<int> weights;
        getline(cin, input);
        stringstream ss2(input);
        while (ss2 >> number) {
            weights.push_back(number);
        }

        // Reading the capacity
        int w;
        cin >> w;
        cin.ignore(); // to ignore the newline after capacity

        // function call
        Solution ob;
        cout << ob.fractionalKnapsack(values, weights, w) << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends