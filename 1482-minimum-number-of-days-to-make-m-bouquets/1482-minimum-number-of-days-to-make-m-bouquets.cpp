class Solution {
public:
    bool check(vector<int>& bloomDay,int mid,int m,int k){
        int sum=0;
        int c=0;
        for (int i=0;i<bloomDay.size();i++){
            if (sum==m) return true;
            if (bloomDay[i]<=mid){
                c++;
                if (c==k){
                    sum++;
                    c=0;
                }
            }
            else {
                c=0;
            }
        }
        if (sum==m) return true;
        return false;
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        int ans=INT_MIN;
        int i=1;
        int j=*max_element(bloomDay.begin(),bloomDay.end());
        while(i<=j){
            int mid=(i+j)/2;
            if (check(bloomDay,mid,m,k)){
                ans=mid;
                j=mid-1;
            }
            else i=mid+1;
        }
        return ans==INT_MIN?-1:ans;
    }
};