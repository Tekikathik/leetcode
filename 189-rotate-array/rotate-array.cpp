class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        k%=n;
        vector<int> v;
        int a=nums.size()-k;
        for(int i=a;i<nums.size();i++) v.push_back(nums[i]);
        for (int i=0;i<a;i++){
            v.push_back(nums[i]);
        }
        nums=v;
        
    }
};