//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    stack<pair<int,int>> st;
    Solution() {
        // code here
    }
    
    // Add an element to the top of Stack
    void push(int x) {
        // code here
        if(st.size()==0)
        st.push({x,x});
        else
        {
            int mini=st.top().second;
            mini=min(mini,x);
            st.push({x,mini});
        }
    }

    // Remove the top element from the Stack
    void pop() {
        // code here
        if(st.size())
        st.pop();
    }

    // Returns top element of the Stack
    int peek() {
        // code here
        if(st.size())
        return st.top().first;
        
        return -1;
    }

    // Finds minimum element of Stack
    int getMin() {
        // code here
        if(st.size())
        return st.top().second;
        
        return -1;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int q;
        cin >> q;

        Solution ob;

        while (q--) {
            int qt;
            cin >> qt;

            if (qt == 1) {
                // push
                int att;
                cin >> att;
                ob.push(att);
            } else if (qt == 2) {
                // pop
                ob.pop();
            } else if (qt == 3) {
                // peek
                cout << ob.peek() << " ";
            } else if (qt == 4) {
                // getMin
                cout << ob.getMin() << " ";
            }
        }
        cout << endl;
        cout << "~" << endl;
    }

    return 0;
}

// } Driver Code Ends