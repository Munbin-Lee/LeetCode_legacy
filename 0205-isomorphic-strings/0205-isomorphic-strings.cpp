class Solution
{
    public:
        bool isIsomorphic(string s, string t)
        {
            int n = s.size();

            unordered_map<char, char> mp;
            unordered_set<char> visited;
            for (int i = 0; i < n; i++)
            {
                if (mp.find(s[i]) == mp.end())
                {
                    if (visited.find(t[i]) != visited.end()) return false;
                    mp[s[i]] = t[i];
                    visited.insert(t[i]);
                }
                else
                {
                    if (mp[s[i]] != t[i]) return false;
                }
            }
            return true;
        }
};