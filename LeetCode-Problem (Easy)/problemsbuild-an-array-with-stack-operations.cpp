class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        int arr[101]={0};
        std::vector<std::string>  str;
        
        for(int i=0;i<target.size();i++)
        {
            arr[target[i]]++;
        }
        
        for(int i=1;i<=target[target.size()-1];i++)
        {
            if(arr[i]==1)
            {
                str.push_back("Push");
            }
            else
            {
                str.push_back("Push");
                str.push_back("Pop");
            }
        }
        return str;
       
    }
};