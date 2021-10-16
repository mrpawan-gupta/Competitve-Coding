class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if (prices.empty()) return 0;
        int buy = prices[0], profit = 0;
        for (int i=1; i<prices.size(); i++) {
            if (prices[i] > buy) profit = max(prices[i]-buy, profit);
            else  buy    = prices[i];
        }
        return profit;
    }
};