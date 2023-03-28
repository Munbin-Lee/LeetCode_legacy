class Solution
{
    public:
        void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
        {
            int c = m + n - 1;
            int c1 = m - 1;
            int c2 = n - 1;

            while (c2 >= 0)
            {
                nums1[c--] = (c1 < 0 || nums2[c2] >= nums1[c1]) ? nums2[c2--] : nums1[c1--];
            }
        }
};