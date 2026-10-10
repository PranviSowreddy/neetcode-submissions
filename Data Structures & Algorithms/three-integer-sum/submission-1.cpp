class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());

        vector<vector<int>>result;

        for(int i=0;i<nums.size();i++)
        {
            if(i>0 && nums[i]==nums[i-1])continue;
            int left=i+1;
            int right=nums.size()-1;

            while(left<right)
            {
                if(nums[left]+nums[right]+nums[i]==0)
                {   
                    result.push_back({nums[i],nums[left],nums[right]});
                    while(left<right && nums[left+1]==nums[left]){
                        left++;
                        continue;
                    }
                    while(left<right && nums[right-1]==nums[right]){
                        right--;
                        continue;
                    }
                    left++;
                    right--;
                }
                else if(nums[left]+nums[right]+nums[i]>0)
                {
                    right--;
                }
                else
                {
                    left++;
                }
            }
        }
        return result;
    }
};
