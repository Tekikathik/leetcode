class KthLargest {
public:
    priority_queue<int, vector<int>, greater<int>> pq;
    int ks=0;
    KthLargest(int k, vector<int>& nums) {
        ks=k;
        for (int i=0;i<nums.size();i++){
            add(nums[i]);
        }
    }
    
    int add(int val) {
        pq.push(val);
        if (pq.size() > ks) {
            pq.pop();
        }
        return pq.top();
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */