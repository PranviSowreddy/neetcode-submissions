class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>mp(nums.begin(),nums.end());
        int longest=0;
        for(int i=0;i<nums.size();i++)
        {
            if(mp.find(nums[i]-1)==mp.end())
            {
                int count=1;
                int current=nums[i];

                while(mp.find(current+1)!=mp.end())
                {
                    count++;
                    current++;
                }
                longest=max(longest,count);
            }
            
        }
        
        return longest;
    }
};
