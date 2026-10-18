class Solution {
public:
    bool binary_search(int num){
        int low=0;
        int high=num;
        while(low<=high){
            int mid=(low+high)/2;
            long long squr=1LL*mid*mid;
            if (squr==num){
                return true;
            }
            else if (squr<num){
                low=mid+1;
            }
            else {
                high=mid-1;
            }
        }
        return false;
    }
    bool isPerfectSquare(int num) {
        return binary_search(num);
    }
};