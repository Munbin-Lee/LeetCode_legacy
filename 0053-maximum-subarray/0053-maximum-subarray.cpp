class Solution
{
    public:
        int maxSubArray(vector<int> &nums)
        {
            const int INF = 987654321;
            int sum = -INF;
            int maxSum = -INF;

            for (int i: nums)
            {
                sum = max(sum + i, i);
                maxSum = max(maxSum, sum);
            }
            return maxSum;
        }
};