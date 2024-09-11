class Solution {
public:
    int minBitFlips(int start, int goal) {
        int c=start^goal;
        int count=0;
        while (c!=0){
            if (c%2==1) count++;
            c/=2;
        }
        return count;
        
    }
};