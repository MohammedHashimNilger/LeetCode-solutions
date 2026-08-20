class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPrice = prices[0];
        int maxProfit = 0;
        for(int i = 1; i < prices.size(); i++) {
            int currentPrice = prices[i];
            if(currentPrice < minPrice) {
                minPrice = currentPrice;
            }
            int currentProfit = prices[i] - minPrice;

            if(currentProfit > maxProfit) {
                maxProfit = currentProfit;
            }
        }
        return maxProfit;
    }
};