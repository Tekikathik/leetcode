class Solution {
public:
    int numSpecialEquivGroups(vector<string>& words) {
        set<string> mp;
        for(int i=0;i<words.size();i++){
            string s="";
            string ss="";
            for(int j=0;j<words[i].size();j++){
                if (j%2==0) s+=words[i][j];
                else ss+=words[i][j];
            }
            sort(s.begin(),s.end());
            sort(ss.begin(),ss.end());
            s+=ss;
            mp.insert(s);
        }
        return mp.size() ;
        
    }
};