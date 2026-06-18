class Solution {
public:

int find(int x,vector<int>&parent)
{
    if(x==parent[x])return x;
    return parent[x]=find(parent[x],parent);
}
    bool validTree(int n, vector<vector<int>>& edges) {
        vector<int>parent(n);
        for(int i=0;i<n;i++)
        parent[i]=i;

        vector<int>size(n,1);

        int components=n;

        for(auto& edge:edges)
        {
            int u=edge[0];
            int v=edge[1];

            int pa=find(u,parent);
            int pb= find(v,parent);

            if(pa!=pb)
            {
                components--;
                if(size[pa]<size[pb])
                {
                    size[pb]+=size[pa];
                    parent[pa]=pb;
                }
                else
                {
                    size[pa]+=size[pb];
                    parent[pb]=pa;
                }
            }
            else return false;
        }
     
       
        return (components==1 && edges.size()==n-1);
        
    }
};
