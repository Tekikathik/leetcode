class Solution {
public:
    int hammingDistance(int x, int y) {
        int b=x^y;
        int c=0;
        while (b!=0){
            if (b&1!=0) c++;
            b=b>>1;
        }
        return c;
        
    }
};