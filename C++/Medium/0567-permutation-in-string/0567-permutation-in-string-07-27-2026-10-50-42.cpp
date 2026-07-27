class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if (s2.size()<s1.size()) return false;
        vector<int> vv(26,0);
        vector<int> v(26,0);
        for (int i=0;i<s1.size();i++){
            v[s1[i]-'a']++;
            vv[s2[i]-'a']++;
        }
        int i=1;
        int j=s1.size();
        while (i<s2.size() && j<s2.size()){
            if (v==vv) return true;
            vv[s2[i-1]-'a']--;
            vv[s2[j]-'a']++;
            j++;
            i++;
        }
        if(v==vv) return true;
        return false;
    }
};