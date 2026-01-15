class Solution {
public:
    int jump(vector<int>& nums) {
        if (nums.size()==1) return 0;
        int ma=nums[0];
        int i=1;
        int j=ma;
        int c=1;
        int f=0;
        while ( i<nums.size() && j<nums.size()){
            int maa=INT_MIN;
            while (i<=j){
                if (maa<=(i+nums[i])){
                    maa=i+nums[i];
                    f=i;
                }
                i++;
            }
            if (j==nums.size()-1) return c;
            j=maa;
            i=f;
            c++;

        }
        return c;

    }
};