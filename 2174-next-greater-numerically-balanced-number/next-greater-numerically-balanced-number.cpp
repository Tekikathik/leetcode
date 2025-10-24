class Solution {
public:
    priority_queue<int> pq;
    int digit_count(int n){
        int c=0;
        while (n!=0){
            c++;
            n/=10;
        }
        return c;
    } 
    void find(int n){
        string num = to_string(n);
        sort(num.begin(), num.end());
        do {
            pq.push(stoll(num));
        } while (next_permutation(num.begin(), num.end()));

    }
    int nextBeautifulNumber(int n) {
        vector<vector<int>> arr = {{1},{22},{122,333},{1333,4444},{14444,22333,55555},{122333,155555,224444,666666},{1224444,1666666}};
        int d=digit_count(n);
        if (d==0) return 1;
        for (int i=0;i<arr[d-1].size();i++){
            find(arr[d-1][i]);
        }
        pq.push(n);
        if (pq.top()==n) return arr[d][0];
        while(!pq.empty()){
            int a=pq.top();
            pq.pop();
            if (pq.top()==n){
                return a;
            }
        }
        return 0;
    }
};