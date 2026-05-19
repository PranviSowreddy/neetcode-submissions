class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int candidate=nums[0];
        int count=1;

        for(int j=1;j<nums.size();j++)
        {
            if(count<0) candidate=nums[j];
            if(candidate==nums[j])
            count++;
            else
            count--;
            
        }

        return candidate;
    }
};