class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxprofit = 0;
        int n = prices.size();
        int minPrice = INT_MAX;
        for(int i = 0; i < n; i++) {
            minPrice = min(minPrice, prices[i]);
            maxprofit = max(maxprofit, prices[i] - minPrice);
        }
        return maxprofit;
    }
};