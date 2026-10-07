class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int count1 = 0;
        int count2 = 0;
        int nums1=0,nums2=0;

        for(int i:nums)
        {
            if(count1==0 && i!=nums2)
            {
                nums1=i;
                count1=1;
            }
            else if(count2==0 && i!=nums1)
            {
                nums2=i;
                count2=1;
            }
            else if(i==nums1)
            {
                count1++;
            }
            else if(i==nums2)
            {
                count2++;
            }
            else
            {
                count1--;
                count2--;
            }
        }

        vector<int>result;
        int c1=0,c2=0;
        for(int i:nums)
        {
            if(i==nums1)
            c1++;
            if(i==nums2)
            c2++;
        }

        if(c1>nums.size()/3)
        result.push_back(nums1);

        if(c2>nums.size()/3)
        result.push_back(nums2);

        return result;
    }
};