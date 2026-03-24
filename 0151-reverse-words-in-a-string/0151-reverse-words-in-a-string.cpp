class Solution {
public:
    string reverseWords(string s) {
        string ss;
        string f="";
        int c=0;
        for(int i=0;i<s.size();i++){
            if (s[i]==' '){
                if (f=="") continue;
                if (c!=0)
                ss=" "+ss;
                ss=f+ss;
                f="";
                c=1;
            }
            else {
                f+=s[i];
            }
        }
        if (f!="" && c!=0) 
        ss= " "+ss;
        ss=f+ss;
        // cout << ss << endl;
        return ss;
    }
};