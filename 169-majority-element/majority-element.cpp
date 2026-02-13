class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int c=0;
        int ele=0;
        for (int i=0;i<nums.size();i++){
            if (c==0){
                ele=nums[i];
                c++;
            }
            else if (ele==nums[i]) c++;
            else c--;
        }
        c=0;
        for (int i=0;i<nums.size();i++){
            if (nums[i]==ele) c++;
        }
        if (c>(nums.size()/2)) return ele;
        return -1;
        
    }
};