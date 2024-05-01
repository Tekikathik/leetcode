class Solution {
public:
    string reversePrefix(string word, char ch) {
        int i,j=0;
        vector<char> st(word.size());
        for( i=0;i<word.size();i++){
            if (ch != word[i]){
                j++;
            }
            else if (ch==word[i]){
                break;
            }
        }
        if (j==word.size()) return word;
        reverse(word.begin(),word.begin()+j+1);
        return word;
        
    }
};