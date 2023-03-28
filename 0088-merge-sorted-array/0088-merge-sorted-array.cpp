class Solution
{
    public:
        void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
        {
            vector<int> res = vector<int> (nums1.size());

            int c = 0;
            int c1 = 0;
            int c2 = 0;

            while (c1 < m && c2 < n)
            {
                res[c++] = (nums1[c1] < nums2[c2]) ? nums1[c1++] : nums2[c2++];
            }
            while (c1 < m)
            {
                res[c++] = nums1[c1++];
            }
            while (c2 < n)
            {
                res[c++] = nums2[c2++];
            }

            nums1 = res;
        }
};