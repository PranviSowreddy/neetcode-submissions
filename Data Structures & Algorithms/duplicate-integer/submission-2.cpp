class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int,int>mp;

        for(int num:nums)
        {
            mp[num]++;
        }

        for(auto& m:mp)
        {
            if(m.second>1)
            {
                return true;
            }
        }

        return false;
        
    }
};