class Solution {
public:
    bool isPalindrome(string s) {
        int n=s.size();
        int left=0;
        int right=n-1;
        string temp="";
        for(char c:s)
        {
            if(isalpha(c))
            {
                temp+=tolower(c);
            }
            if(isdigit(c))
            temp+=c;
        }
        right=temp.size()-1;
        cout<<temp;
        char ch1,ch2;
        while(left<right)
        {            
            ch1=temp[left];
            ch2=temp[right];
            if(ch1!=ch2)
            return false; 
            left++;
            right--;
        }
        return true;
    }
};
