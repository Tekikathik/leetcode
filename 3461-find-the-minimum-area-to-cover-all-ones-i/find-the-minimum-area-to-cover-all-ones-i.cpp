class Solution {
public:
    int minimumArea(vector<vector<int>>& grid) {
        int rowmin=INT_MAX, rowmax=INT_MIN;
        int colmin=INT_MAX, colmax=INT_MIN;
        for (int i=0;i<grid.size();i++){
            int c=0;
            int r1=0;
            int r2=0;
            int c1=0,c2=0,d=0;
            for (int j=0;j<grid[0].size();j++){
                if (c==0 && grid[i][j]==1){
                    r1=j;
                    c=1;
                }
                if (d==0 && grid[i][j]==1){
                    c1=i;
                    d=1;
                }
                if (grid[i][j]==1){
                    c2=i;
                    r2=j;
                }
            }
            if (d==1 || c==1){
            rowmin=min(rowmin,r1);
            rowmax=max(rowmax,r2);
            colmin=min(colmin,c1);
            colmax=max(colmax,c2);
            }
        }
        cout << rowmax-rowmin+1 << endl;
        cout << colmax-colmin+1 << endl;
        // cout << rowmin << " " << rowmax << endl;
        // cout << colmin << " " << colmax << endl;
        return (rowmax-rowmin+1)*(colmax-colmin+1);
    }
};