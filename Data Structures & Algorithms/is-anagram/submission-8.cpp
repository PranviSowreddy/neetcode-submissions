class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int>mp;
        if(s.size()!=t.size()) return false;
        for(char c1:s)
        {
            mp[c1]++;
        }
        for(char c2:t)
        {
            if(mp.find(c2)==mp.end())
            return false;
            mp[c2]--;
            if(mp[c2]==0)
            mp.erase(c2);
        }

        // for(auto& m:mp)
        // {
        //     if(m.second>0)
        //     return false;
        // }

        return true;
    }
};
