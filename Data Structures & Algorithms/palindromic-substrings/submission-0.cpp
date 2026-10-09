class Solution {
public:

void find(int left, int right, int &count,string &s)
{
    while(left>=0 && right<s.size() && s[left]==s[right])
            {
                count++;
            left--;
            right++;
            }
}

    int countSubstrings(string s) {
        int count=0;
        for(int i=0;i<s.size();i++)
        {
            find(i,i,count,s);
            find(i,i+1,count,s);
        }
        return count;

    }
};
