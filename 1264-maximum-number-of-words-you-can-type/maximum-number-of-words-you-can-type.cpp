class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        map<char,int > mp;
        for (int i=0;i<brokenLetters.size();i++){
            mp[brokenLetters[i]]++;
        }
        int d=0;
        int c=0;
        for  (int i=0;i<text.size();i++){
            if (mp.find(text[i])!=mp.end() && c==0){
                c=1;
            }
            if (text[i]==' '){
                if (c==0) d++;
                c=0;
            }
        }
        if (c==0) d++;
        return d;

        
    }
};