class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>mp;

        for(string s:strs)
        {
            string temp=s;
            sort(s.begin(),s.end());
            // if(mp.find(s)!=mp.end())
            // {
            //     mp[s].push_back(temp);
            // }
            mp[s].push_back(temp);
        }

        vector<vector<string>>result;
        for(auto& m:mp)
        {
            result.push_back(m.second);
        }

        return result;
    }
};
