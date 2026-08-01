class Solution {
public:

void dfs_pacific(int sr,int sc,vector<vector<int>>& heights,vector<vector<bool>>&pacific,int curr)
{
if(sr < 0 || sr >= heights.size() || sc < 0 || sc >= heights[0].size() || heights[sr][sc]<curr || pacific[sr][sc])
    return;

 
    pacific[sr][sc]=true;
    curr=heights[sr][sc];
    
    dfs_pacific(sr-1,sc,heights,pacific,curr);
     dfs_pacific(sr+1,sc,heights,pacific,curr);
      dfs_pacific(sr,sc-1,heights,pacific,curr);
       dfs_pacific(sr,sc+1,heights,pacific,curr); 
}

void dfs_atlantic(int sr,int sc,vector<vector<int>>& heights,vector<vector<bool>>&atlantic,int curr)
{
    if(sr < 0 || sr >= heights.size() || sc < 0 || sc >= heights[0].size() || heights[sr][sc]<curr || atlantic[sr][sc])
    return;

    atlantic[sr][sc]=true;
    curr=heights[sr][sc];
    
    dfs_atlantic(sr-1,sc,heights,atlantic,curr);
    dfs_atlantic(sr+1,sc,heights,atlantic,curr);
    dfs_atlantic(sr,sc-1,heights,atlantic,curr);
    dfs_atlantic(sr,sc+1,heights,atlantic,curr);
    
}

    vector<vector<int>> pacificAtlantic(vector<vector<int>>& heights) {
        int rows=heights.size();
        int cols=heights[0].size();

        vector<vector<bool>>pacific(rows,vector<bool>(cols,false));
        int curr=-1;
        for(int i=0;i<rows;i++){
            dfs_pacific(i,0,heights,pacific,curr);   
        }

        for(int j=0;j<cols;j++)
        {
            dfs_pacific(0,j,heights,pacific,curr);
        }

        vector<vector<bool>>atlantic(rows,vector<bool>(cols,false));

        for(int i=0;i<rows;i++){
            dfs_atlantic(i,cols-1,heights,atlantic,-1);   
        }

        for(int j=0;j<cols+2;j++)
        {
            dfs_atlantic(rows-1,j,heights,atlantic,-1);
        }

        vector<vector<int>>cells;
        for(int i=0;i<rows;i++)
        {
            for(int j=0;j<cols;j++)
            {
                if(pacific[i][j] && atlantic[i][j])
                cells.push_back({i,j});
            }
        }

        return cells;


        


    }
};
