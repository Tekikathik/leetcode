class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int> v;
        priority_queue<pair<int,int>> pq;
        for(int i=0;i<k;i++) pq.push({nums[i],i});
        int i=k;
        v.push_back(pq.top().first);
        while(i<nums.size()){
            pq.push({nums[i],i});
            while(pq.top().second<=i-k){
                pq.pop();
            }
            v.push_back(pq.top().first);
            i++;
        }
        return v;
        
    }
};