class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int>result(2*nums.size());
        int i=0;
        int n=nums.size();
        for(int num:nums)
        {
            result[i]=num;
            result[n+i]=num;
            i++;
        }

        return result;
    }
};