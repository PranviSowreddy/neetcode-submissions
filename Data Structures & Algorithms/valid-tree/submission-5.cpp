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
    if(pa==pb)return false;
    parent[pa]=pb;
    return true;
}
    bool validTree(int n, vector<vector<int>>& edges) {
        if(edges.size()!=n-1)return false;
        vector<int>parent(n);
        for(int i=0;i<n;i++)parent[i]=i;

        for(auto edge:edges)
        {

            if(!union_find(edge[0],edge[1],parent))return false;
        }
         return true;
    }
   
};
