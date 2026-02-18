class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int d=-1;
        int c=0;
        int e=-1;
        for(int i=0;i<nums.size();i++){
            if (target==nums[i] && c==0){
                d=i;
                c=1;
            }
            if (target==nums[i] && c==1){
                e=i;
            }
        }
        if (d==-1) return {-1,-1};
        // if (e==0) return {d,d};
        return {d,e};
    }
};