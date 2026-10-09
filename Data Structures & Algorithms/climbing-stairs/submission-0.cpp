class Solution {
public:
    int climbStairs(int n) {
        //define dp state 
        /*
        dp[i]= no.of ways i can reach step i
        this can be done using i-1 and i-2 ways
        dp[0]=0 0 ways to reach step 0
        dp[1]=1
        dp[2]=1
        dp[3]=dp[2]+dp[1];
        dp[4]=dp[2]+dp[2]
        dp[1]+dp[3]
        */

        vector<int>dp(n+1,0);
        dp[1]=1;
        dp[0]=1;
        for(int i=2; i<=n;i++)
        {
            dp[i]=dp[i-1]+dp[i-2];
        }
        return dp[n];
    }
};
