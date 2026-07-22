class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int result=0;
        vector<int> arr(nums.size(),0);
        for (int i=0;i<nums.size();i++){
            if (nums[i]<=nums.size() && nums[i]!=0){
                arr[nums[i]-1]=1;
            }
        }
        for(int i=0;i<nums.size();i++){
            if (arr[i]==0) return i+1;
        }
        return nums.size()+1;
        
    }
};