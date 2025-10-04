class Solution {
public:
    int maxArea(vector<int>& height) {
        int i = 0;
        int j = height.size() - 1;
        long long ma = 0;
        while (i < j) {
            long long a = (long long)min(height[i], height[j]) * (j - i);
            ma = max(ma, a);

            if (height[i] < height[j]) i++;
            else j--;
        }
        return (int)ma; // or return ma if function type is long long
    }
};