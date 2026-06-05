class Solution {
public:

void dfs(int i,vector<int>& vis,vector<vector<int>>& adjlist)
{
    vis[i]=1;
    for(int neigh:adjlist[i])
    {
        if(!vis[neigh])
        dfs(neigh,vis,adjlist);
    }

}
    bool validTree(int n, vector<vector<int>>& edges) {
        vector<vector<int>>adjlist(n);
        for(int i=0;i<edges.size();i++)
        {
            int a=edges[i][0];
            int b=edges[i][1];
            adjlist[a].push_back(b);
            adjlist[b].push_back(a);
        }
        vector<int>vis(n,0);
        int count=0;
        for(int i=0;i<n;i++)
        {
            if(!vis[i])
            {
                dfs(i,vis,adjlist);
                count++;
            }
        }

        if(count>1 || edges.size()!=n-1)
        return false;
        return true;
    }
};
