class Solution {
public:
     int numWaterBottles(int numBottles, int numExchange) {
         
        int sum=0, numEmpty=0;
        while(numBottles!=0)
        {
            sum = sum + numBottles;
            numEmpty = numEmpty +numBottles;
            numBottles = numEmpty/numExchange;
            numEmpty-=numBottles*numExchange;
        }
        return sum;
    }
};