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
            
            while (lo <= hi)
            {
                if (nums[lo] < nums[hi])
                {
                    res[idx--] = nums[hi--];
                }
                else
                {
                    res[idx--] = nums[lo++];
                }
            }
            return res;
        }
};