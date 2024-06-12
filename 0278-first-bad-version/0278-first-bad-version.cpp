// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        long long low=1,high=n,ans=-1;
        while (low<=high){
            int mid=(low+high)/2;
            printf("%d ",mid);
            if ( isBadVersion(mid)){
                ans=mid;
                high=mid-1;
            }
            else {
                low=mid+1;
            }
        }
        return ans;
        
    }
};