class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int d=0;
        int sum=0;
        int c=0;
        for (int i=bank.size()-1;i>=0;i--){
            c=0;
            for (int j=0;j<bank[i].size();j++){
                if (bank[i][j]=='1') c++;
            }
            cout << c << endl;
            sum+=(d*c);
            if (c!=0)
            d=c;
            // cout << d << endl;
        }
        // cout << d << endl;
        // sum+=(d*c);
        return sum;
        
    }
};