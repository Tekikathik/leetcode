class Solution {
public:
    int rec(int i,int x,vector<int>& arr,int size){
        if (i==size) return x;
        int choice1=rec(i+1,x^arr[i],arr,size);
        int choice2=rec(i+1,x,arr,size);
        return choice1+choice2;
    }
    int subsetXORSum(vector<int>& nums) {
        return rec(0,0,nums,nums.size());
    }
};