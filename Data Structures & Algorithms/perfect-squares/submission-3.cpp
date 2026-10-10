class Solution {
public:
    int numSquares(int n) {
        vector<int>coins;
        for(int i=1;i*i<=n;i++)
        {
            coins.push_back(i*i);
        }

        // for(int c:coins)
        // cout<<c<<" ";

        vector<int>dp(n+1,1e9);
        dp[0]=0;

       

        // //we can re use order doesnt matter
        for(int c:coins)
        {
            for(int i=c;i<=n;i++)
            {
                dp[i]=min(dp[i],1+dp[i-c]);
            }  
        }

        return dp[n];
    }
};