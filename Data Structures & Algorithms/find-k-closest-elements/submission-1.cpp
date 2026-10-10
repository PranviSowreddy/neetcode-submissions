class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        int left=0;
        int right=arr.size()-1;

        while(left<=right)
        {
            if(right-left+1==k)
            break;
            if(abs(arr[right]-x)>=abs(arr[left]-x))
            right--;
            else
            left++;
        }

        vector<int>temp(arr.begin()+left,arr.begin()+right+1);

        return temp;
    }
};