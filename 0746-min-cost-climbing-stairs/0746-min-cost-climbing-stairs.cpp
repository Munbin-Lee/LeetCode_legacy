class Solution
{
    public:
        int minCostClimbingStairs(vector<int> &cost)
        {
            int n = cost.size();
            vector<int> memo(n);
            memo[0] = cost[0];
            memo[1] = cost[1];

            for (int i = 2; i < n; i++)
            {
                memo[i] = min(memo[i - 1], memo[i - 2]);
                memo[i] += cost[i];
            }
            return min(memo[n - 1], memo[n - 2]);
        }
};