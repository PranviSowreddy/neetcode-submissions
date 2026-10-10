class Solution {
public:
    bool isValid(string s) {
        unordered_map<char,char>mp;
        mp[']']='[';
        mp['}']='{';
        mp[')']='(';

        stack<char>st;

        for(char c:s)
        {
            if(mp.count(c)>0){
                if(!st.empty())
                {
                    if(mp[c]!=st.top())return false;
                    st.pop();
                }
                else
                return false;
            }
            else
            {
                st.push(c);
            }
        }
        return st.empty();
    }
};
