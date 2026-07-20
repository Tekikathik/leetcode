class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int a=grid.size();
        int c=grid[0].size();
        vector<vector<int>> res(a,vector<int>(c,0));
        for(int i=0;i<a;i++){
            for(int j=0;j<c;j++){
                int d=(j+k)%c;
                int dd=(((j+k)/c)+i)%a;
                res[dd][d]=grid[i][j];
            }
        }
        return res;
    }
};