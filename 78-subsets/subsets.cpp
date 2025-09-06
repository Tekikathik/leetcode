class Solution {
public:
    void subb(vector<int>&nums,int i,vector<int>&v,vector<vector<int>>&subs){
        if (i==nums.size()){
            subs.push_back(v);
            return ;
        }
        v.push_back(nums[i]);
        subb(nums,i+1,v,subs);
        v.pop_back();
        subb(nums,i+1,v,subs);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> subs;
        vector<int> sub;
        subb(nums,0,sub,subs);
        return subs;
    }
};