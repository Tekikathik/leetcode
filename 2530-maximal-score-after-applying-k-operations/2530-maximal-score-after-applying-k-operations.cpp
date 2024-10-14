class Solution {
public:
    long long maxKelements(vector<int>& nums, int k) {
        long long sum=0;
        priority_queue<int>p (nums.begin(),nums.end());
        while(k--){
            int max=p.top();
            p.pop();
            cout << max << " ";
            sum+=max;
            p.push(ceil(max/3.0));
            
        }
        return sum;
    }
};