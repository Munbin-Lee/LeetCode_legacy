class Solution
{
    public:
        vector<int> runningSum(vector<int> &nums)
        {
            int sum = 0;
            for (int &i: nums)
            {
                sum += i;
                i = sum;
            }
            return nums;
        }
};