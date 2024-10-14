class Solution {
public:
    int minGroups(vector<vector<int>>& intervals){
        int ma=0;
        for (int i=0;i<intervals.size();i++){
            ma=max(ma,intervals[i][1]);
        }
        vector<int> v(ma+2,0);
        for (int i=0;i<intervals.size();i++){
            v[intervals[i][0]]++;
            v[intervals[i][1]+1]--;
        }
        int m=v[0];
        for (int i=1;i<ma+2;i++){
            v[i]=v[i]+v[i-1];
            m=max(v[i],m);
        }
        // if (m==0) return 1;
        return m;
        
    }
};