class Solution {
public:
void swap(auto& a,auto& b)
{
    auto temp=a;
    a=b;
    b=temp;
}
void transpose(vector<vector<int>>& matrix)
{
    for(int i=0;i<matrix.size();i++)
    {
        for(int j=0;j<matrix.size();j++)
        {
                if(i!=j && i<j)
    swap(matrix[i][j],matrix[j][i]);
        }
    }

}
    void rotate(vector<vector<int>>& matrix) {
        int left=0;
        int right=matrix.size()-1;

        while(left<right)
        {
            swap(matrix[left],matrix[right]);
            left++;
            right--;
        }

        transpose(matrix);

        
    }
};
