class Solution {
public:

    string encode(vector<string>& strs) {
       string temp="";
       for(string s:strs)
       {
        temp+=to_string(s.size());
        temp+="#";
        temp+=s;
       } 
        cout<<temp<<"\n";
       return temp;
    }

    vector<string> decode(string s) {
        vector<string>result;
        int i=0;
        while(i<s.size()){
            string length="";
            while(s[i]>='0' && s[i]<='9' && s[i]!='#')
            {
                length+=s[i];
                i++;
            }
            int len=stoi(length);
            i++;

            string temp="";
            while(len--)
            {
                temp+=s[i++];
            }
            result.push_back(temp);
        }

        return result;

        
    }
};
