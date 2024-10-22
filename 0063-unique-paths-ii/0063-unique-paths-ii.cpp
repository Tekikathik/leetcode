class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        // vector<vector<int>> v (m,vector<int>(n,0));
        if (obstacleGrid[0][0]==1) return 0;
        int c=0,d=0;
        for (int i=0;i<obstacleGrid.size();i++){
            for (int j=0;j<obstacleGrid[0].size();j++){
                if (obstacleGrid[i][j] != 1){
                    if (i==0 ){
                        if (c!=1){
                            obstacleGrid[i][j]=1;
                        }
                    } 
                    else if (j==0 ){
                        if ( d!=1){
                            obstacleGrid[i][j]=1;
                        }
                    } 
                    else {
                        obstacleGrid[i][j]=obstacleGrid[i][j-1]+obstacleGrid[i-1][j];
                    }
                }
                else{
                    if (i==0){
                        c=1;
                    }
                    if (j==0){
                        d=1;
                    }
                    obstacleGrid[i][j]=0;
                    // cout << obstacleGrid[i][j] << endl;
                }
            }
        }
        return obstacleGrid[obstacleGrid.size()-1][obstacleGrid[0].size()-1];
    }
};