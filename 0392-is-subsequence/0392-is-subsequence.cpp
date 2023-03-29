class Solution
{
    public:
        bool isSubsequence(string s, string t)
        {
            int m = s.size();
            int n = t.size();
            if (m > n) return false;

            int i = 0;
            for (char c: t)
            {
                if (c != s[i]) continue;
                i++;
                if (i == m) return true;
            }
            return (i == m);
        }
};