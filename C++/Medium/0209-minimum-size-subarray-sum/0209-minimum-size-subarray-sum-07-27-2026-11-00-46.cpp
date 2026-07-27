class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int j=0;
        int ma=INT_MAX;
        int sum=0;
        for (int i=0;i<nums.size();i++){
            sum+=nums[i];
            while (sum>=target){
                ma=min(ma,i-j+1);
                sum-=nums[j];
                j++;
            }
        }
        if(ma==INT_MAX) return 0;
        return ma;
        
    }
};