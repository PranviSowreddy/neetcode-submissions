class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<vector<int>,vector<string>>mp;
        for(string s:strs)
        {
            vector<int>freq(26,0);
            for(int c:s)
            freq[c-'a']++;
            
            mp[freq].push_back(s);
        }

        vector<vector<string>>result;
        for(auto& m:mp)
        {
            result.push_back(m.second);
        }

        return result;
    }
};
