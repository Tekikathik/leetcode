class Solution {
public:
    void recursion(vector<int>&v ,int i ,vector<int>& output,vector<vector<int>>& arr){
        if (i==v.size()){
            arr.push_back(output);
            return;
        }
        output.push_back(v[i]);
        recursion(v,i+1,output,arr);
        output.pop_back();
        recursion(v,i+1,output,arr);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> result;
        vector<int> output;
        recursion(nums,0,output,result);
        return result;
        
    }
};