class Solution {
public:
    void mergesort(vector<int>& nums1,int m,int n,vector<int>& nums2){
        int a=nums1.size()-1;
        while ( m>=0 && n>=0){
            if (nums1[m]>nums2[n]){
                nums1[a]=nums1[m];
                m--;
            }
            else {
                nums1[a]=nums2[n];
                n--;
            } 
            a--;
        }
        while (n >= 0) {
            nums1[a--] = nums2[n--];
        }
    }
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        // if (m==0){
        //     nums1=nums2;
        // }
        mergesort(nums1,m-1,n-1,nums2);
        
    }
};