class Solution {
public:
    void recursion(vector<vector<int>>& v,vector<int>& arr,vector<int>& nums,int target,int i){
        if (i>=nums.size()){
            if (target==0){
                v.push_back(arr);
            }
            return ;
        }
        if (nums[i]<=target){
            arr.push_back(nums[i]);
            recursion(v,arr,nums,target-nums[i],i);
            arr.pop_back();
        }
        recursion(v,arr,nums,target,i+1);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> v;
        vector<int> arr;
        recursion(v,arr,candidates,target,0);
        return v;
    }
};