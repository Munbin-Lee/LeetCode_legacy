class Solution
{
    public:
        vector<int> twoSum(vector<int> &numbers, int target)
        {
            int n = numbers.size();
            int lo = 0;
            int hi = n - 1;
            int sum = numbers[lo] + numbers[hi];

            while (sum != target)
            {
                (sum < target) ? lo++ : hi--;
                sum = numbers[lo] + numbers[hi];
            }

            return { lo + 1, hi + 1 };
        }
};