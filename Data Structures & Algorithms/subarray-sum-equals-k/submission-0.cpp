class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        vector<long long>prefix_sum(nums.size());
        prefix_sum[0]=nums[0];

        for(int i=1;i<nums.size();i++)
        {
            prefix_sum[i]=prefix_sum[i-1]+nums[i];
        }
        unordered_map<int,int>mp;
        mp[0]=1;
        int count=0;
        for(int i=0;i<prefix_sum.size();i++)
        {
            if(mp.find(prefix_sum[i]-k)!=mp.end())
            {
                count+=mp[prefix_sum[i]-k];
            }
           
            mp[prefix_sum[i]]++;
            
        }

        return count;
    }
};