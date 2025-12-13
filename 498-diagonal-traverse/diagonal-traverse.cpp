class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        int i=0,c=0,j=0;
        vector<int> v;
        if (mat[0].size()==1){
            for (int i=0;i<mat.size();i++){
                v.push_back(mat[i][0]);
            }
            return v;
        }
        else if (mat.size()==1){
            for(int i=0;i<mat[0].size();i++){
                v.push_back(mat[0][i]);
            }
            return v;
        }
        while (i<mat.size() && j<mat[0].size()){
            if (c==0 && i==0 && j!=mat[i].size()-1){
                v.push_back(mat[i][j]);
                j++;
                c=1;
            }
            if (c==1 && j==0 && i!=mat.size()-1){
                v.push_back(mat[i][j]);
                i++;
                c=0;
            }
            if (j==mat[i].size()-1 && c==0 && i!=mat.size()){
                v.push_back(mat[i][j]);
                i++;
                c=1;
                cout << i << " " << j << endl;
            }
            if (c==1 && i==mat.size()-1 && j != mat[i].size()-1){
                v.push_back(mat[i][j]);
                j++;
                c=0;
                // cout << i << " " << j << endl; 
            }
            if (c==0){
                // cout << i <<" " <<  j << endl;
                v.push_back(mat[i][j]);
                i--;
                j++;

            }
            if (c==1){
                v.push_back(mat[i][j]);
                i++;
                j--;
            }
            
        }
        return v;
    }
};