class Solution
{
    public:
        int search(vector<int> &nums, int target)
        {
            int lo = 0;
            int hi = nums.size() - 1;
            
            while (lo <= hi)
            {
                int md = (lo + hi) / 2;
                if (nums[md] == target)
                {
                    return md;
                }
                
                (nums[md] < target) ? lo = md + 1: hi = md - 1;
            }
            return -1;
        }
};