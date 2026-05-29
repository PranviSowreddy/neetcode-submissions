class Solution {
public:

bool check(const vector<int>& arr1,const vector<int>& arr2)
{
    for(int i=0;i<52;i++)
    {
        if(arr1[i]>arr2[i]) return false;
    }
    return true;
}
    string minWindow(string s, string t) {
        vector<int>arr(52,0);
        for(char c:t)
        {
            if(islower(c))
            arr[c-'a'+26]++;
            else
            arr[c-'A']++;
        }

        int left=0;
        int mn=INT_MAX;
        vector<int>freq(52,0);
        string temp="";

        for(int right=0;right<s.size();right++)
        {
            if(islower(s[right]))
            freq[s[right]-'a'+26]++;
            else
            freq[s[right]-'A']++;

            while(check(arr,freq))
            {
                if(right-left+1<mn){
                temp=s.substr(left,right-left+1);
                mn=right-left+1;
                }
                if(islower(s[left]))
                    freq[s[left]-'a'+26]--;
                else
                    freq[s[left]-'A']--;
                left++;
            }
        }

        return temp;
    }
};
