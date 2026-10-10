class Solution {
public:

int find(int node, vector<int>&parent)
{
    if(node==parent[node])return node;
    return parent[node]=find(parent[node],parent);
}

bool union_find(int a,int b, vector<int>&parent)
{
    int pa=find(a,parent);
    int pb=find(b,parent);
    if(pa!=pb){
    parent[pa]=pb;
    return true;
    }
    return false;
}
    vector<int> findRedundantConnection(vector<vector<int>>& edges) {
        int n=edges.size();
        vector<int>parent(n+1,-1);
        for(int i=1;i<=n;i++)
        {
            parent[i]=i;
        }
        int k=n;
        for(auto edge:edges)
        {
            if(k==1)
            {
                return edge;
            }
            if(!union_find(edge[0],edge[1],parent))return edge;
            k--;
        }
        return {};
    }
};
