class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> v;
        int c=1;
        int n=matrix.size();
        int m=matrix[0].size();
        int k=0;
        int i=0;
        int j=0;
        int f=n*m;
        while (k<f){
            if (c==1 && (j==m-1 ||  matrix[i][j+1]==101)){
                c=2;
                v.push_back(matrix[i][j]);
                matrix[i][j]=101;
                i++;
            }
            else if (c==2 && (i==n-1 ||  matrix[i+1][j]==101)){
                c=3;
                v.push_back(matrix[i][j]);
                matrix[i][j]=101;
                j--;
            }
            else if (c==3 && (j==0 || matrix[i][j-1]==101)){
                c=4;
                v.push_back(matrix[i][j]);
                matrix[i][j]=101;
                i--;
            }
            else if (c==4 && (i==0 || matrix[i-1][j]==101)){
                c=1;
                v.push_back(matrix[i][j]);
                matrix[i][j]=101;
                j++;
                // cout << j << endl;
            }
            else if (c==1){
                v.push_back(matrix[i][j]);
                matrix[i][j]=101;
                j++;
            }
            else if (c==2){
                v.push_back(matrix[i][j]);
                matrix[i][j]=101;
                i++;
            }
            else if (c==3){
                v.push_back(matrix[i][j]);
                matrix[i][j]=101;
                j--;
            }
            else if (c==4){
                v.push_back(matrix[i][j]);
                matrix[i][j]=101;
                i--;
            }
            else break;
            k++;
        }
        cout << c << endl;
        return v;
    }
};