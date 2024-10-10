class Solution {
public:
    int maxWidthRamp(vector<int>& nums) {
        stack <int> st;
        st.push(0);
        for (int i=1;i<nums.size();i++){
            if (nums[st.top()]>nums[i] && !st.empty()){
                st.push(i);
            }
        }
        int ans=INT_MIN;
        for (int i=nums.size()-1;i>=0;i--){
            while (!st.empty() && nums[i]>=nums[st.top()]){
                ans=max(ans,(i-st.top()));
                st.pop();
            }
            if (st.empty()) break;
        }
        return ans;
    }
};