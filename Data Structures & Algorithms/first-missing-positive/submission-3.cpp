class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        unordered_set<int>mp(nums.begin(),nums.end());

        int curr = 1;

        while(1)
        {
            if(mp.find(curr)==mp.end())
            break;
            else
            curr++;
        }
        return curr;
    }
};