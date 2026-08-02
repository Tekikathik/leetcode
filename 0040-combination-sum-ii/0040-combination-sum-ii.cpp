class Solution {
public:
    void recursion(vector<vector<int>>& v,vector<int>& arr,vector<int>& nums,int target,int i){
        if (target==0){
            v.push_back(arr);
            return ;
        }
        if (i>=nums.size())
        return ;
        for(int j=i;j<nums.size();j++){
            if (j > i && nums[j]==nums[j-1]) continue;
            if (nums[j]<=target){
                arr.push_back(nums[j]);
                recursion(v,arr,nums,target-nums[j],j+1);
                arr.pop_back();
            }
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> v;
        vector<int> arr;
        sort(candidates.begin(),candidates.end());
        recursion(v,arr,candidates,target,0);
        return v;
    }
};