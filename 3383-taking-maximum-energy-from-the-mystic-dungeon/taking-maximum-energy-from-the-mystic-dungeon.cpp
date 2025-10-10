class Solution {
public:
    int maximumEnergy(vector<int>& energy, int k) {
        int ma=INT_MIN;
        for (int i=energy.size()-1;i>=k;i--){
            energy[i-k]=energy[i]+energy[i-k];
            ma=max(ma,energy[i-k]);
        }
        // for (int i=k;i>=0;i--){
        //     ma=max(ma,energy[i]);
        // }
        for(int i=0;i<energy.size();i++){
            ma=max(ma,energy[i]);
        }
        return ma;
    }
};