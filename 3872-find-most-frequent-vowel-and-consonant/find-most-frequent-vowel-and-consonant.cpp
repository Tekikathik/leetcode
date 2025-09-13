class Solution {
public:
    int maxFreqSum(string s) {
        map<int,int> mp;
        map<int,int> mpp;
        int ma=0;
        int maa=0;
        for (int i=0;i<s.size();i++){
            if ( s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'){
                mp[s[i]]++;
                if (mp.find(s[i])!=mp.end()){
                    ma=max(ma,mp[s[i]]);
                }
            } 
            else if ( s[i]!='a' || s[i]!='e' || s[i]!='i' || s[i]!='o' || s[i]!='u'){
                mpp[s[i]]++;
                if (mpp.find(s[i])!=mpp.end()){
                    maa=max(maa,mpp[s[i]]);
                }
            } 
        }
        return ma+maa;
        
    }
};