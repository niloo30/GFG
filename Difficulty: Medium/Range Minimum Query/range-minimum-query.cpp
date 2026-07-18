/* The functions which
builds the segment tree */
void bt(int i,int l,int r,int arr[],int* segTree) {
        
        if(l==r) {
            segTree[i]=arr[l];
            return ;
        }
        
        int mid=(l+r)/2;
        
        bt(2*i+1,l,mid,arr,segTree);
        bt(2*i+2,mid+1,r,arr,segTree);
        
        segTree[i]=min(segTree[2*i+1],segTree[2*i+2]);
        
    }
int *constructST(int arr[], int n) {
    // Your code here
    int* segTree = new int[4*n+1];
    
    bt(0,0,n-1,arr,segTree);
    
    return segTree;
}

/* The functions returns the
 min element in the range
 from a and b */
 
 int f(int a,int b,int i,int l,int r,int st[]) {
     
    if(b<l || a>r) 
    return INT_MAX;
    
    if(l>=a && b>=r)
    return st[i];
    
    
    int mid=(l+r)/2;
    
    
    return min(f(a,b,2*i+1,l,mid,st),f(a,b,2*i+2,mid+1,r,st));
 }
int RMQ(int st[], int n, int a, int b) {
    
    // Your code here
    
    return f(a,b,0,0,n-1,st);
}