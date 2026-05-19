class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=*max_element(nums.begin(),nums.end());
        if(n!=nums.size())
        n+=1;
        int res=0;
        for(int i=1;i<=n;i++)
        {
            res^=i;
        }

        for(int i=0;i<nums.size();i++)
        {
            res^=nums[i];
        }
        return res;
    }
};
