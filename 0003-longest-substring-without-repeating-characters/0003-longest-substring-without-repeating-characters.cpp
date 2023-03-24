class Solution
{
    public:
        int lengthOfLongestSubstring(string s)
        {
            unordered_set<char> visited;
            int mx = 0;
            int l = 0;

            for (int r = 0; r < s.size(); r++)
            {
                if (visited.find(s[r]) == visited.end())
                {
                    cout << s[r];
                    visited.insert(s[r]);
                    mx = max(mx, r - l + 1);
                }
                else
                {
                    while (l != r && s[l] != s[r])
                    {
                        visited.erase(s[l++]);
                    }
                    l++;
                    mx = max(mx, r - l + 1);
                }
            }
            return mx;
        }
};