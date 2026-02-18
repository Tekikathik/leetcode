class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int i=0,j=nums.size()-1;
        if (nums[j]<target) return nums.size();
        while(i<=j){
            int mid=i+(j-i)/2;
            if (target==nums[mid] ) return mid;
            else if (target>nums[mid] && target<nums[mid+1]) return mid+1;
            else if (nums[mid]<target){
                i=mid+1;
            }
            else {
                j=mid-1;
            }
        }
        return 0;
    }
};