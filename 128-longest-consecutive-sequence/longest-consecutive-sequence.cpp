class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.size()==0) return 0;
        priority_queue<int> pq;
        for (int i=0;i<nums.size();i++){
            pq.push(nums[i]);
        }
        int c=1;
        int a=pq.top();
        int ma=INT_MIN;
        pq.pop();
        while (!pq.empty()){
            // cout << pq.top() << endl;
            // cout << a << endl;
            if (pq.top()==a){
                a=pq.top();
                pq.pop();
                continue;
            }
            if (pq.top()==(a-1)){
                c++;
            }
            else c=1;
            ma=max(ma,c);
            a=pq.top();
            pq.pop();
        }
        if (ma==INT_MIN) return 1;
        return ma;
    }
};