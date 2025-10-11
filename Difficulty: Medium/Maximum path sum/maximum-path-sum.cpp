/*
class Node {
public:
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/
class Solution {
  public:
    int f(Node* root,int& ans)
    {
        if(!root)
        return 0;
        
        int l=f(root->left,ans);
        int r=f(root->right,ans);
        
        int temp=root->data;
        if(l>0)
        temp+=l;
        if(r>0)
        temp+=r;
        
        ans=max(ans,temp);
        
        return max({0,l,r})+root->data;
    }
    int findMaxSum(Node *root) {
        // code here
        
        int ans=INT_MIN;
        f(root,ans);
        return ans;
        
    }
};