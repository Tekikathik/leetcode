class Solution {
public:
    int maxArea(vector<int>& height) {
        int j=height.size()-1;
        int i=0;
        long long ma=INT_MIN;
        while (i<j){
            long long a=(min(height[i],height[j])*(j-i));
            if (height[i]<height[j]) i++;
            else j--;
            ma=max(ma,a);
        }        
        return ma;

    }
};