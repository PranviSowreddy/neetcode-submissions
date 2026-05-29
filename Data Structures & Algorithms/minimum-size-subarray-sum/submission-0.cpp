class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int left=0;
        int sm=0;

        int mnlen=INT_MAX;

        for(int right=0; right<nums.size(); right++)
        {
            sm+=nums[right];

            while(sm>=target)
            {
                mnlen=min(mnlen,right-left+1);
                sm-=nums[left];
                left++;
            }
        }
        if(mnlen==INT_MAX) return 0;
        return mnlen;
    }
};