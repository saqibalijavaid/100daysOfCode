// Best Time to Buy and Sell Stock

class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int size = prices.size();
        if (size <= 1)
            return 0;

        int minPrice = prices[0];
        int maxProfit = 0;

        for (int i = 1; i < size; i++)
        {
            if (prices[i] < minPrice)
            {
                minPrice = prices[i]; // Update the minimum price
            }
            else
            {
                int currentProfit = prices[i] - minPrice;
                if (currentProfit > maxProfit)
                {
                    maxProfit = currentProfit; // Update the maximum profit
                }
            }
        }
        return maxProfit;
    }
};
