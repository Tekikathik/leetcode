class Solution {
public:
    int check(vector<int>& v,int m){
        int c=1;
        int sum=0;
        for (int i=0;i<v.size();i++){
            if ((sum+v[i])>m){
                c++;
                sum=0;
            }
            sum+=v[i];
        }
        return c;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int low=*max_element(weights.begin(),weights.end());
        int high=0;
        int ans=0;
        for (int i=0;i<weights.size();i++) high+=weights[i];
        while(low<=high){
            long long mid=(low+high)/2;
            if (check(weights,mid)<=days){
                ans=mid;
                high=mid-1;
            }
            else low=mid+1;
        }
        return ans;
        
    }
};