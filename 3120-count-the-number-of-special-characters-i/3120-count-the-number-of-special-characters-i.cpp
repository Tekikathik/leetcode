class Solution {
public:
    int numberOfSpecialChars(string word) {
        vector<int> lower(26,-1);
        vector<int> upper(26,-1);
        for (int i=0;i<word.size();i++){
            if (word[i]>='a' && word[i]<='z'){
                lower[word[i]-'a']=i;
            }
            else upper[word[i]-'A']=i;
        }
        int c=0;
        for (int i=0;i<26;i++){
            if (lower[i]!= -1 && upper[i]!= -1){
                c++;
            }
        }
        return c;
        
    }
};