class Solution {
public:

int robbery(vector<int>& nums) {
        int n = nums.size();
        vector<int>dp(n+1,0);
        dp[1]=nums[0];
        //dp state here tells dp[i] max amt obained after i houses robbed by robber

        for(int i=2;i<=n;i++)
        {
            dp[i]=max(dp[i-2]+nums[i-1],dp[i-1]);
        }

        return dp[n];

    }
    int rob(vector<int>& nums) {

        if(nums.size()==0)return 0;
        if(nums.size()==1)return nums[0];
        vector<int>temp1(nums.begin(),nums.end()-1);
        vector<int>temp2(nums.begin()+1,nums.end());

        return max(robbery(temp1),robbery(temp2));
    }
};
