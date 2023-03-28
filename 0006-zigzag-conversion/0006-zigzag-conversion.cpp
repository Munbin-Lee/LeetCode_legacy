class Solution
{
    public:
        string convert(string s, int numRows)
        {
            if (numRows == 1) return s;
            
            int n = s.size();
            string res;

            for (int i = 0; i < n; i += (numRows - 1) *2)
            {
                res += s[i];
            }

            int d1 = (numRows - 2) *2;
            int d2 = 2;
            for (int i = 1; i < numRows - 1; i++)
            {
                int cnt = 0;
                for (int j = i; j < n;)
                {
                    res += s[j];
                    cnt++;
                    (cnt % 2) ? j += d1: j += d2;
                }
                d1 -= 2;
                d2 += 2;
            }

            for (int i = numRows - 1; i < n; i += (numRows - 1) *2)
            {
                res += s[i];
            }
            return res;
        }
};