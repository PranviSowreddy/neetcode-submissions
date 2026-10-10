class Solution {
public:

bool isValid(int speed, vector<int>&piles, int h)
{
    int time = 0;
    for(int pile:piles)
    {
        time+=(pile/speed);
        if(pile%speed)time+=1;
    }
    return time<=h;
}
    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1;
        int high = *max_element(piles.begin(),piles.end());

        while(low<high)
        {
            int mid = low+(high-low)/2;
            if(isValid(mid,piles,h))
            high=mid;
            else
            low=mid+1;
        }
        return low;
    }
};
