class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n){
        for(int i=1;i<flowerbed.size()-1;i++){
            if (flowerbed[i]==1){
                flowerbed[i+1]=2;
                flowerbed[i-1]=2;
            }
        }
        if (flowerbed[0]==1 && flowerbed.size()>1){
            flowerbed[1]=2;
        }
        if (flowerbed[flowerbed.size()-1]==1 && flowerbed.size()>1){
            flowerbed[flowerbed.size()-2]=2;
        }
        int c=0;
        for (int i=0;i<flowerbed.size()-1;i++){
            if (flowerbed[i]==0){
                flowerbed[i+1]=2;
                c++;
            }
        }
        if (flowerbed[flowerbed.size()-1]==0) {
            c++;
        }
        if (c>=n) return true;
        return false;

    }
};