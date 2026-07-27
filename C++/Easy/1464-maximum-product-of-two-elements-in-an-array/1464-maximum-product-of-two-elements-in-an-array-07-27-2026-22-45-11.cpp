class Solution {
public:
    int maxProduct(vector<int>& nums){
        int ma=INT_MIN;
        int maa=INT_MIN;
        for(int i=0;i<nums.size();i++){
            if (ma<nums[i]){
                maa=ma;
                ma=nums[i];
            }
            else if (maa<nums[i]){
                maa=nums[i];
            }
        }
        return (maa-1)*(ma-1);
    }
};