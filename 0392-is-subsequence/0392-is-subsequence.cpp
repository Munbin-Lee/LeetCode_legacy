class Solution
{
    public:
        bool isSubsequence(string s, string t)
        {
            int n = s.size();
            int i = 0;

            for (char c: t)
            {
                if (c != s[i]) continue;
                i++;
                if (i == n) return true;
            }
            return (i == n);
        }
};