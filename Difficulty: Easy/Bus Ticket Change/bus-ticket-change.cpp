class Solution {
  public:
    bool canServe(vector<int> &arr) {
        // code here
        int n=arr.size();
        
        int five=0;
        int ten=0;
        
        
        for(int i=0;i<n;i++)
        {
            if(arr[i]==5)
            five++;
            else if(arr[i]==10)
            {
                if(five>0)
                {
                    five--;
                    ten++;
                }
                else
                return false;
            }
            else // arr[i]==20
            {
                if(ten>=1 and five>=1)
                {
                    
                    ten--;
                    five--;
                }
                else if(five>=3)
                {
                    five-=3;
                    
                }
                else
                return false;
                
            }
        }
        
        return true;
    }
};