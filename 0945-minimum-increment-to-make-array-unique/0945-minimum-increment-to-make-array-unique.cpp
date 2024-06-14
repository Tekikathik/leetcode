class Solution {
public:
    int minIncrementForUnique(vector<int>& nums){
        sort(nums.begin(),nums.end());
        int ans=0;
        int a=nums.size();
        for (int  i=0;i<a-1;i++){
            if (nums[i]>=nums[i+1]){
                int c=abs(nums[i+1]-nums[i])+1;
                nums[i+1]+=c;
                ans+=c;
            }
        }
        return ans;
    }
};