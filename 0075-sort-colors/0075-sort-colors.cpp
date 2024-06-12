class Solution {
public:
    void sortColors(vector<int>& nums) {
        int a=nums.size();
        for (int i=0;i<a-1;i++){
            for (int j=0;j<a-i-1;j++){
                if (nums[j]>nums[j+1]){
                    int t=nums[j];
                    nums[j]=nums[j+1];
                    nums[j+1]=t;
                }
            }
        }
    }
};