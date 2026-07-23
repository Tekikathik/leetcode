class Solution {
public:
    string merge(string word1,string word2){
        string ss="";
        int i=0,j=0;
        while (i<word1.size() && j<word2.size()){
            ss+=word1[i++];
            ss+=word2[j++];
        }
        while (i<word1.size()){
            ss+=word1[i++];
        }
        while (j<word2.size()){
            ss+=word2[j++];
        }
        return ss;
    }
    string mergeAlternately(string word1, string word2) {
        return merge(word1,word2);

    }
};