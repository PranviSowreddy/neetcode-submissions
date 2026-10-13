class Solution {
public:

bool isValid(long long cap,vector<int>& weights ,int days)
{
    int count=1;
    int bag=0;
    for(int w:weights)
    {
        if(bag+w>cap)
        {
            bag=w;
            count+=1;
        }
        else
        bag+=w;
    }

    return count<=days;
}
    int shipWithinDays(vector<int>& weights, int days) {
        long long low=*max_element(weights.begin(),weights.end());
        long long high=accumulate(weights.begin(),weights.end(),0LL);

        while(low<high)
        {
            long long mid = low+(high-low)/2;
            if(isValid(mid,weights,days))
            {
                high=mid;
            }
            else
            {
                low=mid+1;
            }
        }
        return low;
    }
};