class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit=0;
        int maxi=0;
        int left=0;
        for(int right=1;right<prices.size();right++)
        {
            if(prices[left]>prices[right])
            {
                left=right;
            } 
            else
            maxi=max(maxi,prices[right]-prices[left]);   

        }
        cout<<"left "<<left<<endl;
        return maxi;
    }
};
