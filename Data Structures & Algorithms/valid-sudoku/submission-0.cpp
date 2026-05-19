class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        //rowcheck
        int n=board.size();        
        for(int i=0;i<n;i++)
        {
        unordered_map<char,int>mp;
            for(int j=0;j<n;j++)
            {
                char c=board[i][j];
                if(c=='.')
                continue;
                if(mp.find(c)!=mp.end())
                return false;
                mp[c]=i;
            }
        }

        //now column check
        for(int j=0;j<n;j++)
        {
            unordered_map<char,int>cm;
            for(int i=0;i<n;i++)
            {                
                char c=board[i][j];
                if(c=='.')
                continue;
                if(cm.find(c)!=cm.end())
                return false;
                cm[c]=i;
            }
        }        
        //how to check every square
        for(int i=0;i<9;i+=3)
        {
            for(int j=0;j<9;j+=3)
            {
                unordered_map<char,int>box;
                for(int nr=0;nr<3;nr++)
                {
                    for(int nc=0;nc<3;nc++)
                    {
                        char c=board[i+nr][j+nc];
                        if(c=='.')continue;
                        if(box.find(c)!=box.end())
                        return false;
                        box[c]=i;
                    }
                }
            }
        }
        return true;
    }
};
