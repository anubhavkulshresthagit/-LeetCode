class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        
        int count=0;
        
        if(flowerbed.size()==1)
        {
            if(flowerbed[0]==1)
            {
                if(n==0)
                    return true;
                else
                    return false;
            }
            else
            {
                if(n==1 || n==0)
                    return true;
                else
                    return false;
            }
        }
        
        
        
        for(int i=0;i<flowerbed.size();i++)
        {
            if(i==0)
            {
                if(flowerbed[i+1]==0 && flowerbed[i]==0)
                {
                    flowerbed[i]=1;
                    count++;
                }
            }
            else
            {
                if(i==flowerbed.size()-1)
                {
                    if(flowerbed[i-1]==0 && flowerbed[i]==0)
                {
                    flowerbed[i]=1;
                    count++;
                }
                }
                else
                {
                     if(flowerbed[i-1]==0 && flowerbed[i+1]==0 && flowerbed[i]==0)
            {
               flowerbed[i]=1;
                count++;
            }
                }
            }
           
        }
      
       if(count>=n)
           return true;
        return false;
        
    }
};