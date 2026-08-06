class Solution {
public:
    vector<int> top_left;
    vector<int> bottom_left;
    vector<int> left;
    bool safe(int col,int row,vector<string>& board,int n){
        if (bottom_left[col+row]==0 && top_left[(n-1)+(col-row)]==0 && left[row]==0){
            return true;
        }
        return false;
    }
    void solve(int col,vector<string>& board ,vector<vector<string>>& ans,int n){
        if (col==n){
            ans.push_back(board);
            return;
        }
        for (int row=0;row<n;row++){
            if (safe(col,row,board,n)){
                board[row][col]='Q';
                bottom_left[col+row]=1;
                top_left[(n-1)+(col-row)]=1;
                left[row]=1;
                solve(col+1,board,ans,n);

                bottom_left[col+row]=0;
                top_left[(n-1)+(col-row)]=0;
                left[row]=0;
                board[row][col]='.';
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> ans;
        vector<string> v(n,string(n,'.'));
        left.resize(n, 0);
        top_left.resize(2 * n - 1, 0);
        bottom_left.resize(2 * n - 1, 0);
        solve(0,v,ans,n);
        return ans;
        
    }
};