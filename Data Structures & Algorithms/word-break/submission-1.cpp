class Solution {
public:
    bool wordBreak(string s, vector<string>& dict) {
        unordered_set<string>st(dict.begin(),dict.end());

        vector<bool>dp(s.size()+1,false);
        dp[0]=true;

        for(int i=1;i<=s.size();i++)
        {
            for(int j=0;j<i;j++)
            {
                string temp=s.substr(j,i-j);
                
                if(dp[j] && st.count(temp)>0)
                {
                    // cout<<temp<<endl;
                    dp[i]=true;
                }
            }
            
        }

        return dp[s.size()];
    }
};
