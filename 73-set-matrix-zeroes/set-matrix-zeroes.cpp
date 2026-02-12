class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        map<int,int> mp,mpp;
        for (int i=0;i<matrix.size();i++){
            for (int j=0;j<matrix[i].size();j++){
                if (matrix[i][j]==0){
                    mp[i]=1;
                    mpp[j]=1;
                }
            }
        }
        for (auto i:mp){
            cout << i.first << endl;
        }
        for (int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[i].size();j++){
                if (mp.find(i)!=mp.end()){
                    matrix[i][j]=0;
                }
                else if (mpp.find(j)!=mpp.end()){
                    matrix[i][j]=0;
                }
            }
        }
        
    }
};