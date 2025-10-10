class Solution {
public:
    int maxProduct(vector<string>& words) {
        vector<int> v(words.size(),0);
        int ma=0;
        for (int i=0;i<words.size();i++){
            for (int j=0;j<words[i].size();j++){
                v[i] |= 1<<(words[i][j]-'a');
            }
            for (int j=0;j<i;j++){
                if ((v[i]&v[j])==0){
                    ma=max(ma,(int)(words[i].size()*words[j].size()));
                }
            }
        }
        // long long  ma=INT_MIN;
        // for(int i=0;i<v.size();i++){
        //     for (int j=i+1;j<v.size();j++){
        //         cout << v[i] << " " <<  v[j] << endl;
        //         if ((v[i] & v[j])==0) 
        //         ma = std::max(ma, static_cast<long long>(words[i].size() * words[j].size()));
        //     }
        // }
        if (ma==INT_MIN) return 0;
        return ma;
    }
};