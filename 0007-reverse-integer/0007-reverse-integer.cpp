class Solution
{
    public:
        int reverse(int x)
        {
            int res = 0;

            while (x)
            {
                if (abs(res) >= 214748365) return 0;
                res *= 10;
                res += x % 10;
                x /= 10;
            }
            return res;
        }
};