class Solution {
public:
    string simplifyPath(string path) {
        stack<string> st;
        string ss="";
        string sss="";
        for(int i=0;i<path.size();i++){
            if (path[i]=='/'){
                if(!st.empty() && ss==".."){
                    st.pop();

                }
                else if (ss!=""  && ss!="." && ss!="..") st.push(ss);
                ss="";
            } 
            else {
                ss+=path[i];
                sss="";
            }
        }
        if(!st.empty() && ss==".."){
            st.pop();
        }
        else if (ss!=""  && ss!="." && ss!="..")
        st.push(ss);
        string result="";
        while(!st.empty()){
            // result+="/";
            result="/"+st.top()+result;
            st.pop();
        }
        if (result.empty()) return "/";
        return result;
    }
};