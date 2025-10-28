class Solution {
public:
    int countValidSelections(vector<int>& nums) {
        if (nums.size()==1) return 2;
        vector<int> prefix(nums.size(),0);
        vector<int> suffix(nums.size(),0);
        prefix[0]=nums[0];
        for (int i=1;i<nums.size();i++){
            prefix[i]+=prefix[i-1]+nums[i];
        }
        suffix[nums.size()-1]=nums[nums.size()-1];
        for (int i=nums.size()-2;i>=0;i--){
            suffix[i]+=suffix[i+1]+nums[i];
        }
        int c=0;

        for (int i=1;i<nums.size()-1;i++){
            if (nums[i]==0 && prefix[i-1]==suffix[i+1]){
                c+=2;
            }
            else if (nums[i]==0 && (prefix[i-1]+1==suffix[i+1] || prefix[i-1]==suffix[i+1]+1 )){
                cout << "dsfknj" << endl;
                c+=1;
            }
        }
        // if (nums.size()<=2){
        //     if (nums[0]==0 && nums[1]==1) c++;
        //     if (nums[0]==1 && nums[1]==0) c++;
        // }
        // if (nums[0]==0 && )
        if (suffix[1]==1 && nums[0]==0) c+=1;
        if (prefix[nums.size()-1]==1 && nums[nums.size()-1]==0) c+=1;
        if (suffix[1]==0 && nums[0]==0) c+=2;
        if (prefix[nums.size()-1]==0 && nums[nums.size()-1]==0) c+=2;
        return c;
        
    }
};