class Solution {
public:
    void islandsAndTreasure(vector<vector<int>>& grid) {
        
        int m = grid.size();
        int n= grid[0].size();

        int INF = 2147483647;

       
        queue<pair<int,int>>q;

        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(grid[i][j]==0)
                q.push({i,j});
            }
        }

        int dc[4]={0,0,-1,1};
        int dr[4]={-1,1,0,0};

        while(!q.empty())
        {
            //lets process by levels
            int s = q.size();
            for(int k=0;k<s;k++)
            {
                auto[r,c]=q.front();
                q.pop();

                for(int i=0;i<4;i++)
                {
                    int nr = r+dr[i];
                    int nc = c+dc[i];

                    if(nr>=0 && nr<m && nc>=0 && nc<n && grid[nr][nc]==INF)
                    {
                        grid[nr][nc]=0;
                        q.push({nr,nc});
                        grid[nr][nc]=1+grid[r][c];
                    }
                }
            }
        }

        return ;
    }
};
