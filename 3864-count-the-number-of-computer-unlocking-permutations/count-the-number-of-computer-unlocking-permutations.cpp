class Solution {
public:
    int countPermutations(vector<int>& complexity) {
        int ma=INT_MAX;
        for (int i=1;i<complexity.size();i++){
            if (complexity[i]==complexity[0]){
                return 0;
            }
            ma=min(ma,complexity[i]);
        }
        ma=min(ma,complexity[0]);
        if (complexity[0]!=ma) return 0;
        // cout << "sldifubgg" << endl;
        long long MOD = 1000000007LL;
        long long d=complexity.size()-1;
        long long c=1;
        while (d > 1){
            c=(c*d)%MOD;
            d--;
            // cout << c << endl;
        }
        return c;
    }
};