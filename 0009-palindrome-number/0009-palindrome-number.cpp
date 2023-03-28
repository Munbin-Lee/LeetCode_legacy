class Solution
{
    public:
        bool isPalindrome(int x)
        {
            if (x < 0) return false;

            int div = 1;
            for (int i = x; i >= 10; i /= 10)
            {
                div *= 10;
            }
            cout<<div;

            while (div)
            {
                if (x / div != x % 10) return false;
                x %= div;
                x /= 10;
                div /= 100;
            }
            return true;
        }
};