class Solution {
public:

bool isValid(long long p,long long x)
{
    return p*p<=x;
}
    int mySqrt(int x) {
       long long low=0;
       long long high=max(1,x/2);

       while(low<high)
       {
        long long mid=low+(high-low+1)/2;
        if(isValid(mid,x))
        {
            low=mid;
        }
        else
        high=mid-1;
       } 
       return low;
    }
};