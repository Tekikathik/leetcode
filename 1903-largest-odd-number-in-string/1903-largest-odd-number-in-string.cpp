class Solution {
public:
    string largestOddNumber(string num) {
        string s="";
        int c=-1;
        for (int i=num.size()-1 ; i>=0;i--){
            if ((num[i]-'0')%2 !=0){
                c=i;
                break;
            } 
        }
        if (c==-1) return "";
        for (int i=0;i<=c;i++){
            s+=num[i];
        }
        return s;
    }
};