class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int>mp;
        if(s.length()!=t.length())
        return false;
        for(char c1:s)
        {
            mp[c1]++;
        }

        for(char c2:t)
        {
            if(mp[c2]==0)
            return false;
            mp[c2]--;
        }
        return true;
    }
};
