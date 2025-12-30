class Solution {
public:
    long long maximumScore(vector<int>& nums, string s) {
        long long c=0;
        priority_queue<int> pq;
        for (int i=0;i<nums.size();i++){
            pq.push(nums[i]);
            if (s[i]=='1'){
                c+=pq.top();
                pq.pop();
            }
        }
        return c;
    }
};