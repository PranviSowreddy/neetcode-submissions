class Solution {
public:
    int characterReplacement(string s, int k) {
        int left=0;
        int max_len=0;
        int maxFreq=0;
        vector<int>mp(26,0);

        for(int right=0; right<s.size(); right++)
        {
            mp[s[right]-'A']++;
            maxFreq=max(maxFreq,mp[s[right]-'A']);

            while(right-left+1-maxFreq>k)
            {
                mp[s[left]-'A']--;
                left++;
            }

            max_len=max(max_len,right-left+1);
        }
        return max_len;
    }
};
