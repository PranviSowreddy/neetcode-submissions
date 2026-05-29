class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        //yes answer we get since mimimum sum and contiuguos peoperty and
        vector<int>temp(arr.begin(),arr.end());
        for(int i=0; i<arr.size();i++)
        {
            arr[i]=abs(arr[i]-x);
        }

        int left=0;
        int sm=0;
        int l=-1;
        int r=-1;
        int mn_sum=INT_MAX;

        for(int right=0; right<arr.size(); right++)
        {
            sm+=arr[right];

            if(right-left+1 > k)
            {
                sm-=arr[left];
                left++;
            }

            if(right-left+1 == k)
            {
                if(mn_sum>sm)
                {
                    mn_sum=min(mn_sum,sm);
                    l=left;
                    r=right;
                }
            }
        }

        vector<int>result;

       for(int i=l;i<r+1;i++)
       result.push_back(temp[i]);
    
        return result;
    }
};