class Solution {
public:


void solve(int left,int right, string s, int& start, int& maxlen)
{
    while(left>=0 && right<s.size() && s[left]==s[right])
    {
        if(maxlen<right-left+1)
        {
            maxlen=right-left+1;start=left;
        }
        left--;
        right++;
    }
}
    string longestPalindrome(string s) {
        //center expanding approach
        int start=0;
        int maxlen=0;
        for(int i=0;i<s.size();i++)
        {
            solve(i,i,s,start,maxlen);
            solve(i,i+1,s,start,maxlen);
        }
        return s.substr(start,maxlen);
    }
};
