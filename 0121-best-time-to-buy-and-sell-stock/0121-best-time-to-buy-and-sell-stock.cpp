class Solution
{
    public:
        int maxProfit(vector<int> &prices)
        {
            int minPrice = 987654321;
            int maxProfit = 0;

            for (int i: prices)
            {
                maxProfit = max(maxProfit, i - minPrice);
                minPrice = min(minPrice, i);
            }
            return maxProfit;
        }
};