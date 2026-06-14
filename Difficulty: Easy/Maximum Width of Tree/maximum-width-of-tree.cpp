/*  Structure of a Binary Tree

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
};
 */

class Solution {
  public:
    int maxWidth(Node* root) {
        // code here
        queue<Node*> q;
      int ans=0;
      if(root)q.push(root);
      while(q.size())
      {
          Node* temp;
          int n=q.size();
          ans=max(ans,n);
          while(n--)
          {
              temp=q.front();
              q.pop();
              if(temp->left)q.push(temp->left);
              if(temp->right)q.push(temp->right);
              
          }
      }
      return ans;
    }
};