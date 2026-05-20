class Solution {
public:

static bool custom_sort(const pair<int,int>& m1,const pair<int,int>& m2)
{
    return m1.second>m2.second;
}
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        for(int i:nums)
        mp[i]++;

         vector<pair<int,int>> freq(mp.begin(), mp.end());

        sort(freq.begin(),freq.end(),custom_sort);

        vector<int>result;

        for(int i=0;i<k;i++)
        {
            result.push_back(freq[i].first);
        }

        return result;

        
    }
};
