class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_map<int,int>mp;
        int longest=0;

        for(int num:nums)
        mp[num]++;

        for(int i=0;i<nums.size();i++)
        {
            int k=nums[i];
            if(mp.find(k-1)==mp.end()){
                int count=1;
                //int c=k;
            while(mp.find(k+1)!=mp.end())
            {
                count++;
                k++;
            }
            longest=max(longest,count);
            }
        }        
        return longest;
    }
};
