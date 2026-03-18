class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        if (nums.size()<4) return {};
        set<vector<int>> v;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-3;i++){
            for (int j=i+1;j<nums.size()-2;j++){
                int k=nums.size()-1;
                int f=j+1;
                while(f<k){
                    long long sum=(long long)nums[i]+nums[j]+nums[k]+nums[f];
                    if (sum==target) v.insert({nums[i],nums[j],nums[f],nums[k]});
                    if (sum<target) f++;
                    else k--;
                }
            }
        }
        vector<vector<int>> vv;
        for(auto &i : v){
            vv.push_back(i);
        }
        return vv;
        
    }
};