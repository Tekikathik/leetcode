class Solution {
public:
    int minNumberOperations(vector<int>& target) {
        int a=target[0];
        int c=a;
        for(int i=1;i<target.size();i++){
            if (target[i] > target[i-1] ){
                c+=abs(target[i]-target[i-1]);
            }
        }
        return c;
        
    }
};