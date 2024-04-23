class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int j=0;
        vector<int> ans(nums.size());
        for (int i=0;i<nums.size();i++){
            if (val != nums[i]) {
                ans[j]=nums[i];
                j++;
            }
        }
        for (int k=0;k<j;k++){
            nums[k]=ans[k];
        }
        return j;
        
    }
};