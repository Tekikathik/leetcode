class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int d=1;
        for (int i=1;i<nums.size();i++){
            if (nums[i]==nums[i-1]) continue;
            else{
                nums[d]=nums[i];
                d++;
            }
        }
        return d;
        
    }
};