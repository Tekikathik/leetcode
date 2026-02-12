class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int idx=-1;
        for (int i=nums.size()-2;i>=0;i--){
            if (nums[i]<nums[i+1]){
                idx=i;
                break;
            }
        }
        int ma=INT_MAX;
        int id=-1;
        if (idx==-1) {
            reverse(nums.begin(),nums.end());
            return ;
        }
        for(int i=nums.size()-1;i>idx;i--){
            if (nums[i]>nums[idx] && nums[i]<ma){
                ma=nums[i];
                id=i;
            }
        }
        cout << id << endl;
        swap(nums[idx],nums[id]);
        sort(nums.begin()+idx+1,nums.end());
    }
};