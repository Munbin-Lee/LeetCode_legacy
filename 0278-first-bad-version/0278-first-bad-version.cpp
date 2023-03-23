// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution
{
    public:
        int firstBadVersion(int n)
        {
            int lo = 1;
            int hi = n;
            int res;
            while (lo <= hi)
            {
                int md = lo + (hi - lo) / 2;
                if (isBadVersion(md))
                {
                    res = md;
                    hi = md - 1;
                }
                else
                {
                    lo = md + 1;
                }
            }
            return res;
        }
};