class Solution {
public:
    long long minimumSteps(string s) {
        long long l=0;
        long long c=0;
        for (int i=0;i<s.size();i++){
            if (s[i]=='0'){
                c+=(i-l);
                l++;
            }
        }
        return c;
    }
};