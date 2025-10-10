class Solution {
public:
    bool checkKthBit(int n, int k) {
        int val = (1<<k);
        if ((n&val) != 0) {
            return false;
        } 
        return true;
    }
    int maxProduct(vector<string>& words) {
        vector<int> v;
        for (int i=0;i<words.size();i++){
            int c=0;
            for (int j=0;j<words[i].size();j++){
                // if (checkKthBit(c,words[i][j]-97))
                    c+=pow(2,words[i][j]-97);
            }
            v.push_back(c);
        }
        long long  ma=INT_MIN;
        for(int i=0;i<v.size();i++){
            for (int j=i+1;j<v.size();j++){
                cout << v[i] << " " <<  v[j] << endl;
                if ((v[i] & v[j])==0) 
                ma = std::max(ma, static_cast<long long>(words[i].size() * words[j].size()));
            }
        }
        if (ma==INT_MIN) return 0;
        return ma;
    }
};