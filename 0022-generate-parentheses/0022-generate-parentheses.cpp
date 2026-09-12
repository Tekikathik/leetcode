class Solution {
public:
    void solve(vector<string>& ans,int n,string s,int open,int close){
        if (s.size()==2*n){
            ans.push_back(s);
            return ;
        }
        if (open<n){
            s+='(';
            solve(ans,n,s,open+1,close);
            s.pop_back();
        }
        if (close<open){
            s+=')';
            solve(ans,n,s,open,close+1);
        }
    }
    
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        string s;
        solve(ans,n,s,0,0);
        return ans;
    }
};