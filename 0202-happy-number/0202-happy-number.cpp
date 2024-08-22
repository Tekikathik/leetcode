class Solution {
public:
    bool isHappy(int n) {
        int sum=0,c=0;
        while(n!=1){
            sum=0;
            c++;
            while (n!=0){
                sum+=pow(n%10,2);
                n=n/10;
            }
            if (c==10) return false;
            n=sum;
        }
        return true;
        
    }
};