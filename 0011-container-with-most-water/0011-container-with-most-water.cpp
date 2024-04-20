class Solution {
public:
    int maxArea(vector<int>& height) {
        int i=0;
        int j=height.size()-1;
        int ma;
        while (i<j){
            int a=min(height[i],height[j])*(j-i);
            ma=max(a,ma);
            if (height[i]<height[j]){
                i++;
            }
            else j--;
        }
        return ma;
        
    }
};