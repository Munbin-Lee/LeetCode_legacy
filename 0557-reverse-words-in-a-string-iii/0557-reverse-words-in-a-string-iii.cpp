class Solution
{
    public:
        string reverseWords(string s)
        {
            stack<char> st;
            string res;

            for (int i = 0; i < s.size(); i++)
            {
                if (s[i] != ' ')
                {
                    st.emplace(s[i]);
                }
                else
                {
                    while (!st.empty())
                    {
                        res += st.top();
                        st.pop();
                    }
                    res += ' ';
                }
            }

            while (!st.empty())
            {
                res += st.top();
                st.pop();
            }
            return res;
        }
};