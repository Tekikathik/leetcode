class Solution {
public:
    struct cmp {
        bool operator()(const string &a, const string &b) const {
            if (a.size() == b.size()) {
                return a > b;
            }
            return a.size() > b.size();
        }
    };
    string kthLargestNumber(vector<string>& nums, int k) {
        priority_queue<string,vector<string>,cmp> pq;
        for(int i=0;i<nums.size();i++){
            pq.push(nums[i]);
        }
        while (!pq.empty()){
            if (pq.size()==k){
                return pq.top();
            }
            pq.pop();
        }
        return "";
    }
};