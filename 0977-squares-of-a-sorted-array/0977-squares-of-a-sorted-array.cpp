class Solution
{
    public:
        vector<int> sortedSquares(vector<int> &nums)
        {
            int md;
            for (int i = 0; i < nums.size(); i++)
            {
                if (nums[i] >= 0)
                {
                    md = i;
                    break;
                }
            }

            for (int &i: nums)
            {
                i *= i;
            }

            vector<int> res(nums.size());
            int idx = 0;
            int lo = md - 1;
            int hi = md;

            while (idx < nums.size())
            {
                if (lo == -1)
                {
                    res[idx++] = nums[hi++];
                }
                else if (hi == nums.size())
                {
                    res[idx++] = nums[lo--];
                }
                
                else if (nums[lo] < nums[hi])
                {
                    res[idx++] = nums[lo--];
                }
                else
                {
                    res[idx++] = nums[hi++];
                }
            }
            return res;
        }
};