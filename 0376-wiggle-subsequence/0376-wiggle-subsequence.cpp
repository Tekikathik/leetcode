class Solution {
public:
    int wiggleMaxLength(vector<int>& nums) {
        int c=-1;
        int d=1;
        for (int i=0;i<nums.size()-1;i++){
            if (nums[i]<nums[i+1] && c==1){
                continue;
            }
            else if (nums[i]>nums[i+1] && c==0){
                continue;
            }
            else if (nums[i]<nums[i+1]){
                c=1;
                d++;
            }
            else if (nums[i]>nums[i+1] ){
                c=0;
                d++;
            }
        }
        return d;

    }
};