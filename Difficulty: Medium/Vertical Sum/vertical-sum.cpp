/* Structure of binary tree node
class Node{
public:
    int data;
    Node* left, right;
    Node(int item)
    {
        data = item;
        left = nullptr;
        right = nullptr;
    }
}
*/
class Solution {
  public:
    map<int,int> mp;
    void rec(Node* root,int y)
    {
        
        if(root==NULL)
        return ;
        //left y-1
        //right y+1 
        rec(root->left,y-1);
        mp[y]+=root->data;
        rec(root->right,y+1);
    }
    vector<int> verticalSum(Node* root) {
        // code here
        
        rec(root,0);
        vector<int> ans;
        for(auto& ele:mp)
        ans.push_back(ele.second);
        
        
        return ans;
        
    }
};