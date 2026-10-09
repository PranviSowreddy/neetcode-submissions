class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
        vector<int>dp(n+1,0);
        dp[0]=cost[0];
        dp[1]=cost[1];
        //we can pass the last index
        for(int i=2;i<n;i++)
        {
            int one = dp[i-1];
            int two = dp[i-2];

            dp[i]=min(one,two)+cost[i];
        }
        return min(dp[n-1],dp[n-2]);
    }
};