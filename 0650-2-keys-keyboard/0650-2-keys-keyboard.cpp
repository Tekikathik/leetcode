class Solution {
public:
    int minSteps(int n) {
        if (n==1) return 0;
        if (n==2) return 2;
        vector<int> v(n+1,0);
        v[0]=0;
        v[1]=0;
        v[2]=2;
        for (int i=3;i<=n;i++){
            int factor=i/2;
            while (factor>=1){
                if (i%factor==0){
                    int clip=v[factor];
                    int copy=1;
                    int paste=(i/factor-1);
                    v[i]=clip+copy+paste;
                    break;
                }
                else factor--;
            }
        }
        return v[n];
    }
};