class Solution {
public:
    void islandsAndTreasure(vector<vector<int>>& grid) {
        queue<pair<int,int>>q;

        int m = grid.size();
        int n = grid[0].size();

        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(grid[i][j]==0){
                q.push({i,j});
                }
            }
        }

       
        int dr[]={-1,0,0,1};
        int dc[]={0,-1,1,0};

        while(!q.empty())
        {
            int s = q.size();
            for(int i=0;i<s;i++)
            {
                auto[r,c]=q.front();q.pop();
                for(int d=0;d<4;d++)
                {
                    int nr=r+dr[d];
                    int nc=c+dc[d];

                    if(nr>=0 && nr<m && nc>=0 && nc<n && grid[nr][nc]==2147483647)
                    {
                        grid[nr][nc]=1+grid[r][c];
                        q.push({nr,nc});
                    }
                }

            }
        }

    }
};
