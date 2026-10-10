class Solution {
public:
    bool validWordAbbreviation(string word, string abbr) {
        int j=0;
        bool flag=false;
        
        for(int i=0;i<abbr.size();i++)
        {
            

            if(abbr[i]=='0')return false;

            if(abbr[i]>'0' && abbr[i]<='9')
            {
                string temp="";
                
                while(abbr[i]>='0' && abbr[i]<='9')
                {
                    temp+=abbr[i];
                    i++;
                }
               // flag=true;
                 if(temp[0]=='0')return false;
                int k = stoi(temp);
                 if(j+k>word.size())return false;
                j+=k;

                //cout<<i<<endl;
            }

            if(word[j]!=abbr[i])
            {
                cout<<word[j]<<" and "<<abbr[i]<<endl;
                return false;
            }
            else
            j++;
            
        }

        return true;
    }
};