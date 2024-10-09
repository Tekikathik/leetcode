class Solution {
public:
    int minAddToMakeValid(string s) {
        int c=0;
        stack<int> st;
        for(int i=0;i<s.size();i++){
            if (s[i]=='(') st.push(s[i]);
            else {
                if (!st.empty()) st.pop();
                else c++;
            }
        }
        return st.size()+c;
    }
};