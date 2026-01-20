class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost){
        int tc=0,tg=0;
        int c=0;
        int d=0;
        for  (int i=0;i<gas.size();i++){
            c+=(gas[i]-cost[i]);
            if (c<0){
                d=i+1;
                c=0;
            }
            tc+=cost[i];
            tg+=gas[i];
        }
        if (tc>tg) return -1;
        return d;
    }
};