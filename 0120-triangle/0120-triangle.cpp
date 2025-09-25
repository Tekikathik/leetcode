class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        for(int i=triangle.size()-2; i>=0 ;i--){
            for (int j=0;j<triangle[i].size();j++){
                // cout << triangle[i+1][j] << endl;
                // if (j==triangle[i].size()-1) triangle[i][j]+=triangle[i+1][j];
                if (triangle[i+1][j] < 0 && triangle[i+1][j+1] < 0) {
                    triangle[i][j]+=min(triangle[i+1][j],triangle[i+1][j+1]);
                    // cout << max(triangle[i+1][j],triangle[i+1][j+1]) << endl;
                } 
                else triangle[i][j]+=min(triangle[i+1][j],triangle[i+1][j+1]);
                // cout << triangle[i][j] << endl;
            }
        }
        return triangle[0][0];
        
    }
};