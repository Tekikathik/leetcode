class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int low=0;
        int n=matrix.size();
        int m=matrix[0].size();
        int high=(n*m)-1;
        while(low<=high){
            int mid=(low+high)/2;
            int k=mid/m;
            int f=mid%m;
            if (matrix[k][f]==target) return true;
            if (matrix[k][f]<target){
                low=mid+1;
            }
            else {
                high=mid-1;
            }
        }
        // if (high==target) return true;
        return false;
        
    }
};