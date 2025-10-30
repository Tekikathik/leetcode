class Solution {
    public boolean isPowerOfTwo(int n) {
        if(n==-2147483648) return false;
        if(n==0) return false;
        if(n==1) return true;
        else if((n&(n-1))==0) return true;
        return false;
    }
}