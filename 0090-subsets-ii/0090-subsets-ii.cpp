class Solution {
public:
    void recursion(vector<int>& nums, vector<vector<int>>& ans,vector<int>& arr, int start) {
        if (start==nums.size());
        ans.push_back(arr);
        for (int i = start; i < nums.size(); i++) {
            if (i > start && nums[i] == nums[i - 1])
                continue;
            arr.push_back(nums[i]);
            recursion(nums, ans, arr, i + 1);
            arr.pop_back();
        }
    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;
        vector<int> arr;
        recursion(nums, ans, arr, 0);
        return ans;
    }
};