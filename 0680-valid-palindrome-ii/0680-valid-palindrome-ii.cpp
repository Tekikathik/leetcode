class Solution {
public:
    bool palindrome(string s,int i,int j){
        int c=0;
        while (i<j){
            if (s[i] != s[j]){
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
    bool validPalindrome(string s) {
        int i=0,n=s.size()-1;
        while(i<=(n/2)){
            if  (s[i] != s[n-i]){
                return palindrome(s,i+1,n-i) || palindrome(s,i,n-i-1);
            }
            i++;
        }
        return true;
    }
};