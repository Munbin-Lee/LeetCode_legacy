class Solution
{
    public:
        double findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2)
        {
            double res = 0;
            int n1 = nums1.size();
            int n2 = nums2.size();
            bool isOdd = (n1 + n2) % 2;
            int m1 = (n1 + n2) / 2;
            int m2 = (isOdd) ? -1 : m1 - 1;
            int c = 0;
            int c1 = 0;
            int c2 = 0;

            while (c1 < n1 && c2 < n2)
            {
                int tmp = (nums1[c1] < nums2[c2]) ? nums1[c1++] : nums2[c2++];
                if (c == m1 || c == m2) res += tmp;
                c++;
            }

            while (c1 < n1)
            {
                int tmp = nums1[c1++];
                if (c == m1 || c == m2) res += tmp;
                c++;
            }

            while (c2 < n2)
            {
                int tmp = nums2[c2++];
                if (c == m1 || c == m2) res += tmp;
                c++;
            }

            if (!isOdd) res /= 2;
            return res;
        }
};