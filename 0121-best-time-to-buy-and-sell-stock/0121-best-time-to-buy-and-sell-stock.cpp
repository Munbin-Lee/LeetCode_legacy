class Solution
{
    public:
        int maxProfit(vector<int> &prices)
        {
            int minPrice = 987654321;
            int res = 0;

            for (int i: prices)
            {
                res = max(res, i - minPrice);
                minPrice = min(minPrice, i);
            }
            return res;
        }
};