class Solution {
public:
    bool isSubsequence(string s, string t) {
        int n=s.size();
        int a=t.size(),i=0,j=0;
        while (i<n && j<a){
            if (s[i]==t[j]){
                i++;
            }
            j++;
        }
        if (i!=n) return false;
        return true;
    }
};