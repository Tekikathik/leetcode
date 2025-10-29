class Solution {
public:
    int smallestNumber(int n) {
        int i=0,b=0,c=0;
        while (n>0) {
            n=n/2;
            i++;
        }
        for (int j=i-1;j>=0;j--){
            b+=pow(2,c);
            c++;
        }
        return b;
    }
};