class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<vector<int>> ans(rowIndex+1);
        for (int i=0;i<rowIndex+1;i++){
            ans[i].resize(i+1);
            for (int j=0;j<=i;j++){
                if (j==0 || j==i){
                    ans[i][j]= 1;
                }
                else {
                    ans[i][j]=ans[i-1][j]+ans[i-1][j-1];
                }
            }
        }
        return ans[rowIndex];
        
    }
};