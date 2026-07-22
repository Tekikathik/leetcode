class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> suffix(nums.size(),0);
        vector<int> prefix(nums.size(),0);
        prefix[0]=nums[0];
        for (int i=1;i<nums.size()-1;i++){
            prefix[i]=prefix[i-1]*nums[i];
        }
        suffix[nums.size()-1]=nums[nums.size()-1];
        for (int i=nums.size()-2;i>=0;i--){
            suffix[i]=suffix[i+1]*nums[i];
        }
        nums[0]=suffix[1];
        nums[nums.size()-1]=prefix[nums.size()-2];
        for (int i=1;i<nums.size()-1;i++){
            nums[i]=prefix[i-1]*suffix[i+1];
        }
        return nums;
        
    }
};