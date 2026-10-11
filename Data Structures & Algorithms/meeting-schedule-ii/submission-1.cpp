/**
 * Definition of Interval:
 * class Interval {
 * public:
 *     int start, end;
 *     Interval(int start, int end) {
 *         this->start = start;
 *         this->end = end;
 *     }
 * }
 */

class Solution {
public:
    int minMeetingRooms(vector<Interval>& intervals) {
        vector<int>arr(1000000+1,0);
        int maxi=0;

        for(auto i:intervals)
        {
            int start=i.start;
            int end=i.end;
            maxi=max(maxi,end);

            arr[start]+=1;
            arr[end]+=-1;
        }

        int laps=0;
        int x=0;

        for(int i=0;i<=maxi;i++)
        {
            x+=arr[i];
            laps=max(laps,x);
        }
        return laps;
    }
};
