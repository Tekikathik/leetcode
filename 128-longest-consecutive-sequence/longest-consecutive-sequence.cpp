class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> v;
        for(int i=0;i<nums.size();i++){
            v.insert(nums[i]);
        }
        long long ma=0;
        long long j=0;
        for(auto i:v){
            if (v.find(i-1)==v.end()){
                long long c=0;
                for(int j=i;;j++){
                    if (v.find(j)==v.end()){
                        ma=max(ma,c);
                        c=0;
                        break;
                    }
                    else c++;
                }
            } 
        }
        return ma;
    }
};