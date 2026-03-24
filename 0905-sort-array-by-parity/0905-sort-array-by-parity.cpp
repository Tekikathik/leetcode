class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int i=0,j=nums.size()-1;
        // int b=nums.size()-1;
        // int f=0;
        // vector<int> v(nums.size(),0);
        while (i<j){
            if (nums[i] % 2 > nums[j] % 2) {
                swap(nums[i], nums[j]);
            }
            if (nums[i] % 2 == 0) i++;
            if (nums[j] % 2 == 1) j--;
        }
        // cout << j << endl;
        return nums;
        
    }
};