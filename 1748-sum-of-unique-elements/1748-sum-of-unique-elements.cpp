class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        map<int,int> mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        int c=0;
        for(auto i: mp){
            if (i.second==1) c+=i.first;
        }
        return c;

        
    }
};