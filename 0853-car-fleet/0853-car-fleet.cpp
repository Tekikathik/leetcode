class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<pair<int,int>> v;
        for(int i=0;i<position.size();i++){
            v.push_back({position[i],speed[i]});
        }
        sort(v.begin(),v.end());
        stack<double> st;
        for(int i=0;i<v.size();i++){
            double time = (double)(target - v[i].first) / v[i].second;
            while(!st.empty() && st.top() <= time){
                st.pop();
            }
            st.push(time);
        }
        // while(!st.empty()){
        //     cout << st.top() << endl;
        //     st.pop();
        // }
        return st.size();
    }
};