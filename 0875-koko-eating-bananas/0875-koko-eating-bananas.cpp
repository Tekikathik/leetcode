class Solution {
public:
    long long check(vector<int>& piles,int k){
        long long c=0;
        for (int i=0;i<piles.size();i++){
            c+=ceil((double)piles[i]/k);
        }
        return c;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int ans=INT_MAX;
        int i=1;
        int j=*max_element(piles.begin(),piles.end());
        while(i<=j){
            int mid=(i+j)/2;
            if (check(piles,mid)<=h){
                ans=mid;
                j=mid-1;
            }
            else i=mid+1;
        }
        return ans;
    }
};