class Solution {
public:
    vector<int> stableMountains(vector<int>& height, int threshold) {
        vector<int> v;
        for (int i=0;i<height.size()-1;i++){
            if (height[i]>threshold) {
                v.push_back(i+1);
            }
        }
        return v;
        
    }
};