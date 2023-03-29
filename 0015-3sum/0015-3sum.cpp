class Solution
{
    public:    
        int binarySearch(vector<int> &v, int num, int lo, int hi)
        {
            while (lo <= hi) {
                int md = (lo+hi)/2;
                if (v[md] == num) return v[md];
                (v[md] < num)? lo = md + 1: hi = md - 1;
            }
            return -1;
        }
    
        auto threeSum(vector<int> &nums)
        {
            int n = nums.size();
            sort(nums.begin(), nums.end());

            vector<vector<int>> res;
            set<tuple<int, int, int>> st;
            for (int i = 0; i < n - 2; i++)
            {
                for (int j = i + 1; j < n - 1; j++)
                {
                    int sum = nums[i] + nums[j];
                    int k = binarySearch(nums, -sum, j + 1, n - 1);
                    if (k == -1) continue;
                    st.emplace(nums[i], nums[j], k);
                }
            }
            
            for(auto i : st) {
                auto [ a, b, c ] = i;
                res.emplace_back(vector<int> {a, b, c});
            }
            return res;
        }
};