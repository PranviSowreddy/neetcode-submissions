class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        
        int min_value=1;
        int max_value=1;

        int maxi=nums[0];
        
        for(int i=0;i<n;i++)
        {
            int mi=min_value;
            int mx=max_value;
            min_value=min({mi*nums[i],mx*nums[i],nums[i]});
            max_value= max({mi*nums[i],mx*nums[i],nums[i]});
            maxi=max(maxi,max_value);
        }


        return maxi;
    }
};
