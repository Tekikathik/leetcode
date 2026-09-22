class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int> ans(temperatures.size(),0);
        stack<pair<int,int>> st;
        st.push({temperatures[temperatures.size()-1],temperatures.size()-1});
        for(int i=temperatures.size()-1;i>=0;i--){
            while(!st.empty() && st.top().first<=temperatures[i]){
                st.pop();
            }
            if (!st.empty())
            ans[i]=st.top().second-i;
            st.push({temperatures[i],i});
        }
        return ans;
    }
};

// 73
// 76
// 76 72
// 76 72 69