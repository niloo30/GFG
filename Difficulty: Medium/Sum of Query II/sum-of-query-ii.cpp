class Solution {
  public:
    void bt(int i,int l,int r,int arr[],vector<int>& segTree) {
        
        if(l==r) {
            segTree[i]=arr[l];
            return ;
        }
        
        int mid=(l+r)/2;
        
        bt(2*i+1,l,mid,arr,segTree);
        bt(2*i+2,mid+1,r,arr,segTree);
        
        segTree[i]=segTree[2*i+1]+segTree[2*i+2];
        
    }
    
    int sumQuery(int start,int end,int i,int l,int r, vector<int>& segTree) {
        
        if(end< l || start>r)
        return 0;
        
        
        if(l>=start && r<=end) 
        return segTree[i];
        
        int mid=(l+r)/2;
        
        return sumQuery(start,end,2*i+1,l,mid,segTree)+sumQuery(start,end,2*i+2,mid+1,r,segTree);
        
        
    }
    vector<int> querySum(int n, int arr[], int q, int queries[]) {
        // code here
        
        vector<int> segTree(4*n);
        
        bt(0,0,n-1,arr,segTree);
        
        vector<int> ans;
        
        for(int i=0;i<2*q;i+=2) {
            int start=queries[i]-1;
            int end=queries[i+1]-1;
            
            int val=sumQuery(start,end,0,0,n-1,segTree);
            ans.push_back(val);
        }
        
        return ans;
        
        
    }
};