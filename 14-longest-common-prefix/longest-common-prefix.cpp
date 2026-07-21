class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.size()==1) return strs[0];
        for (int i=1;i<strs.size();i++){
            for (int j=0;j<strs[i].size();j++){
                if (strs[i-1][j]!=strs[i][j]){
                    string ss="";
                    for(int k=0;k<j;k++){
                        ss+=strs[i][k];
                    }
                    strs[i]=ss;
                    if (strs.size()-1==i)
                    return ss;
                }
            }
        }
        return strs[strs.size()-1];
        // return "";
        
    }
};