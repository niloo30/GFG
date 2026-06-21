/*
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};
*/

class Solution {
  public:
    map<int,int> mp;
    vector<int> topView(Node *root) {
        // code here
        queue<pair<Node*,int>> q;
        
        q.push({root,0});
        
        while(!q.empty())
        {
            Node* node=q.front().first;
            int hd=q.front().second;
            
            q.pop();
            
            if(mp.find(hd)==mp.end())
            {
                mp[hd]=node->data;
            }
            
            if(node->left)
            q.push({node->left,hd-1});
            
            if(node->right)
            q.push({node->right,hd+1});
        }
        
        vector<int> ans;
        
        for(auto& ele:mp)
        {
            ans.push_back(ele.second);
        }
        
        return ans;
        
    }
};