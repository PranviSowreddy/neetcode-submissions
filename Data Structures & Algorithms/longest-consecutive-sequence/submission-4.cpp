class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>st(nums.begin(),nums.end());
        int len = 0;
        for(auto i:st)
        {
            //if earlier element is not present in set we csn start counting new sequence
            if(st.count(i-1)==0)
            {
                int curr = i;
                int count = 1;
                while(st.count(curr+1)>0)
                {
                    count++;
                    curr++;
                }
                len = max(len,count);
            }
        }
        return len;
        
    }
};
