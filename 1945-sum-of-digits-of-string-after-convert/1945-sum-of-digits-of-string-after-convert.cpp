class Solution {
public:
    int getLucky(string s, int k) {
        // long long  sum=0;
        vector<int> v;
        for (int i=0;i<s.size();i++){
             int b=s[i]-96;
            while( b!=0){
               v.push_back(b%10);
                b/=10;
            }
        }
        long long  sum=0;
        int j=v.size();
        for(int i=1;i<=k;i++){
            sum=0;
            for(int k=0;k<j;k++){
                sum+=v[k];
                // cout << v[k] <<endl;
            }
            int c=sum;
            // cout << sum <<endl;
            int f=0;
            while(c !=0){
                v[f]=c%10;
                f++;
                c/=10;
            }
            j=f;
        }
        return sum;
    }
};