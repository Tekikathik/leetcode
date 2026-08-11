class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        int c=0;
        int a=intervals.size();
        if (a<=1) return 0;
        int ma=intervals[0][1];
        for (int i=1;i<intervals.size();i++){
            if (ma>intervals[i][0] ){
                c++;
                ma=min(ma,intervals[i][1]);
            }
            else ma=intervals[i][1];
        }
        // if (ma>intervals[a-1][0] ){
        //     ma=intervals[a-1][1];
        //     c++;
        // }
        return c;
        
    }
};