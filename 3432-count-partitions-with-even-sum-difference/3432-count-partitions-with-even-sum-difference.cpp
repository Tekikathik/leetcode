class Solution {
public:
    int countPartitions(vector<int>& nums) {
        vector<int> prefix(nums.size(),0);
        vector<int> suffix(nums.size(),0);
        prefix[0]=nums[0];
        for (int i=1;i<nums.size();i++){
            prefix[i]=prefix[i-1]+nums[i];
        }
        suffix[nums.size()-1]=nums[nums.size()-1];
        for (int i=nums.size()-2;i>=0;i--){
            suffix[i]=suffix[i+1]+nums[i];
        }
        int d=0;
        for (int i=0;i<nums.size()-1;i++){
            int c=prefix[i]-suffix[i+1];
            if (c%2==0) d++;
        }
        
        return d;
        
        
        
    }
};