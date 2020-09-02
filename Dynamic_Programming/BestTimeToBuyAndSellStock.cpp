class Solution 
{
public:
    int maxProfit(vector<int>& prices)
    { 
        int n = prices.size();
        if(n == 0 || n == 1)
            return 0;
        int profit = prices[0] >= prices[1] ? 0 : prices[1] - prices[0];
        int min1 = min(prices[0], prices[1]);
        for(int i = 2 ; i < n ; i++)
        {
            min1 = min(min1, prices[i]);
            profit = max(profit, prices[i] - min1);
        }
        return profit;
    }
};