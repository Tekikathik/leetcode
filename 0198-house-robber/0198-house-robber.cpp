class Solution {
public:
    int rob(vector<int>& nums) {
        int n=nums.size();
        vector<int> v(nums.size(),-1);
        if  (n==1) return nums[0];
        if (n==2) return nums[n-1] > nums[n-2] ? nums[n-1] : nums[n-2];
        v[n-1]=nums[n-1];
        v[n-2]=nums[n-2];
        for(int i=n-3;i>=0;i--){
            // cout << v[i+1] << endl;
            nums[i]=nums[i]+v[i+2];
            v[i]=nums[i];
            v[i+1]=max(v[i+1],v[i+2]);
        }
        for(int i=0;i<n;i++) cout << v[i] << endl;
        return v[0] > v[1] ? v[0] :v[1];
        
    }
};