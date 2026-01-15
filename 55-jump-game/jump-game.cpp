class Solution {
public:
    bool canJump(vector<int>& nums) {
        int ma=nums[0];
        int i=1;
        int j=ma;
        int c=1;
        int f=0;
        int d=5;
        if (nums.size()==1) return true;
        if (nums[0]==0) return false;
        while ( i<nums.size() && j<nums.size() ){
            int maa=INT_MIN;
            while (i<=j){
                if (maa<=(i+nums[i])){
                    maa=i+nums[i];
                    f=i;
                }
                // cout << i << endl;
                i++;
            }
            cout << j << endl;
            if(j>=nums.size()-1) return true;
            if (j==maa) return false;
            j=maa;
            i=f;
            c++;
        }
        if (j>=nums.size()-1) return true;
        return false;
        
    }
};