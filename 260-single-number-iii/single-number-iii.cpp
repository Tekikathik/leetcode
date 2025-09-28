class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int a=0;
        int c=0;
        for (int i=0;i<nums.size()-1;i++){
            if (nums[i]==nums[i+1]){
                i++;
            }
            else if (c==1){
                return {a,nums[i]};
            }
            else{
                a=nums[i];
                c=1;
            }
            // cout << nums[i] << endl;
        }
        // for (int i=0;i<nums.size();i++) cout << nums[i] << endl;
        int n=nums.size();
        // cout << a << endl;
        // if (a==0) return {nums[a],nums[n-1]};
        return {a,nums[n-1]};
    }
};