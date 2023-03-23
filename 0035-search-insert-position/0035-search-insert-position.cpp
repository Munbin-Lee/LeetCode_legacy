class Solution
{
    public:
        int searchInsert(vector<int> &nums, int target)
        {
            int lo = 0;
            int hi = nums.size() - 1;
            int res = nums.size();
            while (lo <= hi)
            {
                int md = (lo + hi) / 2;
                if (nums[md] < target)
                {
                    lo = md + 1;
                }
                else
                {
                    res = md;
                    hi = md - 1;
                }
            }
            return res;
        }
};