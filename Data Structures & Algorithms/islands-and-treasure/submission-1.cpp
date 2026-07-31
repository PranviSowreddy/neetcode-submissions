class Solution {
public:
    void islandsAndTreasure(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();

        int INF=2147483647;

        vector<vector<int>>dist(m,vector<int>(n,-1));
        queue<pair<int,int>>q;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(grid[i][j]==0)
                {
                    q.push({i,j});
                    dist[i][j]=0;
                }
            }
        }

        int dr[]={-1,0,0,1};
        int dc[]={0,1,-1,0};

        while(!q.empty())
        {
            int s=q.size();
            for(int i=0;i<s;i++)
            {
                auto[r,c]=q.front();q.pop();

                for(int i=0;i<4;i++)
                {
                    int nr=r+dr[i];
                    int nc=c+dc[i];
                    if(nr>=0 && nr<m && nc>=0 && nc<n && grid[nr][nc]==INF)
                    {
                        q.push({nr,nc});
                        grid[nr][nc]=1+grid[r][c];
                    }
                }
            }
        }
        
       
        return;
    }
};
