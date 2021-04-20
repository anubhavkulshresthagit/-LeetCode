class Solution {
public:
    int xorOperation(int n, int start) {
        
        int arr[1000];
        int k=0;
        int total=0;
         while(n--)
        {
            arr[k]=start;
            start = start+2;
            k++;
        }
       
        for(int i=0;i<k;i++)
        {
           total = (total^arr[i]);
        }
        
       return total;
    }
};
