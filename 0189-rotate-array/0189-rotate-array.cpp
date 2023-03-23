class Solution
{
    public:
        void rotate(vector<int> &nums, int k)
        {
            k %= nums.size();
            vector<int> tmp(nums.size());

            int i = 0;
            for (; i < k; i++)
            {
                tmp[i] = nums[nums.size() - k + i];
            }

            int j = i;
            for (; i < nums.size(); i++)
            {
                tmp[i] = nums[i - j];
            }
            nums = tmp;
        }
};