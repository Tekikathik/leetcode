class Solution {
public:
    int addedInteger(vector<int>& nums1, vector<int>& nums2) {
        int ma=INT_MAX;
        int mc=INT_MAX;
        for (int i=0;i<nums1.size();i++){
            ma=min(nums1[i],ma);
        }
        for(int i=0;i<nums2.size();i++){
            mc=min(nums2[i],mc);
        }
         return mc-ma;
        
    }
};