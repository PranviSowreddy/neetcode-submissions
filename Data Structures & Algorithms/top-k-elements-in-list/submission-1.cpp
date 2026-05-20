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


        //sort(freq.begin(),freq.end(),custom_sort);
        //instead of sorting use buckets

        vector<vector<int>>buckets(nums.size()+1);

        for(auto& m :mp)
        {
            buckets[m.second].push_back(m.first);
        }

        vector<int>result;
        int count=0;
        for(int i=nums.size();i>=0;i--)
        {
            for(int num:buckets[i]){
            result.push_back(num);
            if(result.size()==k)
            return result;
           
            }
        }

        return result;

        
    }
};
