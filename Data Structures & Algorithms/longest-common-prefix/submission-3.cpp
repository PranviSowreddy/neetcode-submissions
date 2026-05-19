class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string prefix=strs[0];
        
        string temp="";
        for(int j=1;j<strs.size();j++)
        {
            int p=0;
           
            while(p<prefix.size() && p<strs[j].size() && prefix[p]==strs[j][p])
            {
                p++;
            }
            //update prefix as 
            prefix=strs[j].substr(0,p);
            if(prefix.size()==0) return "";
        
       } 
       return prefix;
    }
};