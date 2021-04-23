class Solution {
public:
    int totalMoney(int n) {
       int sum=0,k=1,original=1;
        for(int i=1;i<=n;i++)
        {
            if((i-1)%7==0 && i!=1)
            {
                k = original + 1;
                original++;
                
            }
            
            sum = sum + k;
            k++;
           
            
        }
        
        return sum;
        
    }
};