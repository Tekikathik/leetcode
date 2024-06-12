class Solution {
public:
    void swap(vector<int> & nums,int i,int j){
        int t=nums[i];
        nums[i]=nums[j];
        nums[j]=t;
    }
    void sortColors(vector<int>& nums) {
        int a=nums.size()-1;
        int i=0,j=0;
        while (i<=a){
            if (nums[i]==0){
                swap(nums,i,j);
                i++;
                j++;
            }
            else if (nums[i]==2){
                swap(nums,i,a);
                a--;
            }
            else {
                i++;
            }
        }
    }
};