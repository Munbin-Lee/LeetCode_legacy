class Solution
{
    public:
        int myAtoi(string s)
        {
            int res = 0;
            bool space = true;
            bool sign = true;
            bool isNegative = false;
            bool isOverflowed = false;

            for (char c: s)
            {
                if (space && c == ' ') continue;
                
                if (sign && (c == '+'||c=='-')) {
                    isNegative = (c=='-');
                    space = false;
                    sign = false;
                    continue;
                }

                if (c >= '0' && c <= '9')
                {
                    space = false;
                    sign = false;
                    int num = c - '0';

                    if (res >= 214748365 || res == 214748364 && num > 7)
                    {
                        isOverflowed = true;
                        break;
                    }

                    res *= 10;
                    res += num;
                    continue;
                }

                break;
            }

            if (isOverflowed) return (isNegative) ? INT_MIN : INT_MAX;
            return (isNegative) ? -res : res;
        }
};