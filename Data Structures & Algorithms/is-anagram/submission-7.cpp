class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int>arr(26,0);
        if(s.size()!=t.size()) return false;
        for(char c1:s)
        {
            arr[c1-'a']++;
        }
        for(char c2:t)
        {
            if(arr[c2-'a']==0)
            return false;
            arr[c2-'a']--;
        }

        for(int a:arr)
        {
            if(a>0)
            return false;
        }

        return true;
    }
};
