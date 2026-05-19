class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string prefix=strs[0];
        int p=0;
        string temp="";
        for(int j=1;j<strs.size();j++)
        {
            if(prefix.size()==0) return "";
            while(p<prefix.size() && p<strs[j].size() && prefix[p]==strs[j][p])
            {
                temp+=prefix[p++];
            }
            //update prefix as 
            prefix=temp;
            temp="";
            p=0;
       } 
       return prefix;
    }
};