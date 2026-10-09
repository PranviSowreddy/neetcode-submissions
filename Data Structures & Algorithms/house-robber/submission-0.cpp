class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        vector<int>dp(n+1,0);
        dp[1]=nums[0];
        //dp state here tells dp[i] max amt obained after i houses robbed by robber

        for(int i=2;i<=n;i++)
        {
            dp[i]=max(dp[i-2]+nums[i-1],dp[i-1]);
        }

        return max(dp[n-1],dp[n]);

    }
};
