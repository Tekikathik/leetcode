class Solution {
public:
    long long minimumSteps(string s) {
        int j=s.size()-1;
        int c=0;
        long long sum=0;
        for(int i=s.size()-1;i>=0;i--){
            if (s[i]=='1'){
                sum+=((j-i)-c);
                c++;
            }
        }
        return sum;
    }
};