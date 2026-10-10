class Solution {
public:
    int appendCharacters(string s, string t) {

        int i=0;

        for(char c:s)
        {
            if(c==t[i])
            {
                i++;
           
            }
        }

        // cout<<i<<endl;
        // cout<<t.size();
        return t.size()-i;
    }
};