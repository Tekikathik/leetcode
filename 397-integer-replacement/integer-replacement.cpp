class Solution {
public:
    int integerReplacement(int nn) {
        long long n=nn;
        int d=0;
        while (n!=1){
            if (n%2==0){
                n/=2;
                d++;
            }
            else if(n==3 || n%4==1){
                n-=1;
                d++;
            }
            else {
                n+=1;
                d++;
            }
        }
        return d;
        
    }
};