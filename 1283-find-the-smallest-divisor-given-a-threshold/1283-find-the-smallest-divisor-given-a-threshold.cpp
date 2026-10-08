class Solution {
public:
    long long check(vector<int>& nums,int mid){
        long long c=0;
        for (int i=0;i<nums.size();i++){
            c+=ceil((double)nums[i]/mid);
        }
        return c;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        int i=1;
        long long sum=0;
        for(int j=0;j<nums.size();j++){
            sum+=nums[j];
        }
        int ans=INT_MAX;
        while(i<=sum){
            long long mid=(i+sum)/2;
            if (check(nums,mid)<=threshold){
                ans=mid;
                sum=mid-1;
            }
            else {
                i=mid+1;
            }
        }
        return ans;

        
    }
};