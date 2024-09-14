class Solution {
public:
    int longestSubarray(vector<int>& nums){
        int c=0;
        int count=0;
        int ma=INT_MIN;
        int mi=INT_MIN;
        for (int i=0;i<nums.size();i++){
            ma=max(ma,nums[i]);
        }
        for(int i=0;i<nums.size();i++){
            if (nums[i]==ma){
                count++;
            }
            else {
                mi=max(mi,count);
                count=0;
            }
        }
        mi=max(mi,count);
        return mi;
    }
};