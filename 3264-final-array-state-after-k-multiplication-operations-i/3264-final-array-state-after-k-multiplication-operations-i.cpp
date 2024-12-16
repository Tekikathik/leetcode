class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        for (int i=0;i<k;i++){
            int min=INT_MAX;
            int c=0;
            for (int j=0;j<nums.size();j++){
                if(min>nums[j]){
                    min=nums[j];
                    c=j;
                }
            }
            nums[c]*=multiplier;
        }
        return nums;
        
    }
};