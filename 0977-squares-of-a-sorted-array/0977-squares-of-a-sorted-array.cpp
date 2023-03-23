class Solution
{
    public:
        vector<int> sortedSquares(vector<int> &nums)
        {
            for (int &i: nums)
            {
                i *= i;
            }

            vector<int> res(nums.size());
            int idx = nums.size() - 1;
            int lo = 0;
            int hi = nums.size() - 1;

            while (idx != -1)
            {
                res[idx--] = (nums[lo] < nums[hi]) ? nums[hi--] : nums[lo++];
            }
            return res;
        }
};