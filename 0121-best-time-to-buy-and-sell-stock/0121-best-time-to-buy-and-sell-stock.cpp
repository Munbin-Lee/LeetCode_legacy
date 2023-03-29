class Solution
{
    public:
        int maxProfit(vector<int> &prices)
        {
            priority_queue<int, vector < int>, greater < >> pq;
            pq.emplace(987654321);

            int maxProfit = 0;
            for (int i: prices)
            {
                maxProfit = max(maxProfit, i - pq.top());
                pq.emplace(i);
            }
            return maxProfit;
        }
};