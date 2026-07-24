class Solution {
public:
    int fibonaaci(int n){
        if (n<=1) {
            return n;
        }
        return fibonaaci(n-1)+fibonaaci(n-2);
    }
    int fib(int n) {
        return fibonaaci(n);
        
    }
};