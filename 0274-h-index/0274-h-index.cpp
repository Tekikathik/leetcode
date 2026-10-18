class Solution {
public:
    int check(vector<int>& v,int k){
        int c=0;
        for (int i=0;i<v.size();i++){
            if (v[i]>=k) c++;
        }
        return c;
    }
    int hIndex(vector<int>& citations) {
        int low=0;
        int high=citations.size();
        int ma=-1;
        while(low<=high){
            int mid=(low+high)/2;
            int d=check(citations,mid);
            if (d>=mid){
                ma=mid;
                low=mid+1;
            }
            else high=mid-1;
        }
        return ma;
    }
};