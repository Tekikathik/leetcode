class Solution {
public:
    void backtracking(vector<vector<int>>& v ,vector<int>& nums,int srt){
        if (srt==nums.size()){
            v.push_back(nums);
            return;
        }
        for (int i=srt;i<nums.size();i++){
            swap(nums[srt],nums[i]);
            backtracking(v,nums,srt+1);
            swap(nums[srt],nums[i]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        // vector<bool> check(nums.size(),false);
        vector<int> arr;
        backtracking(ans,nums,0);
        return ans;
    }
};