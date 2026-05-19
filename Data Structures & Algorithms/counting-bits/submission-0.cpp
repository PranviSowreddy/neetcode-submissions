class Solution {
public:
    int count(int num)
    {
        int c=0;
        while(num>0)
        {
            c+=num&1;
            num>>=1;
        }
        return c;
    }
    vector<int> countBits(int n) {
       vector<int>result;
       for(int i=0;i<n+1;i++)
       {
            result.push_back(count(i));
       } 
       return result;
    }
};
