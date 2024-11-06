class Solution {
public:
    bool canSortArray(vector<int>& nums) {
        int start = 0, end;
        for(int i=1; i<nums.size(); i++){
            while(i<nums.size() && __builtin_popcount(nums[i]) == __builtin_popcount(nums[i-1])){
                i++;
            }
            end = i;
            sort(nums.begin() + start, nums.begin() + end);
            start = i;
        }
        for(int i=0; i<nums.size()-1; i++){
            if(nums[i] > nums[i+1]) return false;
        }
        return true;
    }
};