class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) {
        
        int count=0,p;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==1)
            {
                p=i;
                break;
            }
        }
        
        
        for(int i=p;i<nums.size();i++)
        {
            if(nums[i]==0)
            {
                count++;
            }
            else
            {
                if(count<k && i!=p)
                {
                   return false;
                }
                else
                {
                    if(count>=k)
                        count=0;
                }
            }
        }
        
        return true;
        
    }
};