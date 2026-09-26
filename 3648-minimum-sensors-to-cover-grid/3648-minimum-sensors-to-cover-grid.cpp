class Solution {
public:
    int minSensors(int n, int m, int k) {
        int x=2*k+1;
        return ((n+x-1)/x)* ((m+x-1)/x);
    }
};