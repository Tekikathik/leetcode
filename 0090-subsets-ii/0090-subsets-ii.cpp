class Solution {
public:
    map<vector<int>,int> mp;
    void subb(vector<int>&nums,int i,vector<int>&v,vector<vector<int>>&subs){
        if (i==nums.size()){
            if (mp.find(v)==mp.end()){
                mp[v]++;
                subs.push_back(v);
            }
            return ;
        }
        v.push_back(nums[i]);
        subb(nums,i+1,v,subs);
        v.pop_back();
        subb(nums,i+1,v,subs);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> subs;
        vector<int> sub;
        sort(nums.begin(),nums.end());
        subb(nums,0,sub,subs);
        return subs;
        
    }
};