class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int a=nums.size();
        int pro=1;
        vector<int> arr(a,0);
        arr[0]=nums[0];
        for (int i=1;i<a;i++){
            arr[i]=arr[i-1]*nums[i];
        }
        vector<int> vrr(a,0);
        // int j=1;
        vrr[a-1]=nums[a-1];
        for (int i=a-2;i>=0;i--){
            vrr[i]=vrr[i+1]*nums[i];
            // j++;
        }
        // for(int i=0;i<a;i++){
        //     cout << vrr[i] << " ";
        // }
        nums[0]=vrr[1];
        nums[a-1]=arr[a-2];
        for (int i=1;i<a-1;i++){
            nums[i]=vrr[i+1]*arr[i-1];
        }
        return nums;
    }
};