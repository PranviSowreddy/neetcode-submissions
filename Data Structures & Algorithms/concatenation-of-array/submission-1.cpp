class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int>result(2*nums.size());
        int i=0;
        for(int num:nums)
        {
            result[i++]=num;
        }

        for(int num:nums)
        {
            result[i++]=num;
        }

        return result;
    }
};