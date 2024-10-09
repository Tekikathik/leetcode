class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int ma=INT_MIN,BestBuy=prices[0];
        for (int i=1;i<prices.size();i++){
            if (prices[i] > BestBuy){
                ma=max(ma,prices[i]-BestBuy);
            }
            BestBuy=min(prices[i],BestBuy);
        }
        if (ma==INT_MIN) return 0;
        return ma;
    }
};