class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>result;
        unordered_map<int,int>mp;
        int i=0;
        for(i=0;i<nums.size();i++)
        {
            int complement=target-nums[i];
            if(mp.find(complement) != mp.end()){
                result.push_back(mp[complement]);
            result.push_back(i);
            
            break;
            }
            mp[nums[i]]=i;
          
        }


        return result;
    }
};
