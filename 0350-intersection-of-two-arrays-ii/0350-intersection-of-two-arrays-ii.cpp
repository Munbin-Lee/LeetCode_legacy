class Solution
{
    public:
        vector<int> intersect(vector<int> &nums1, vector<int> &nums2)
        {
            int n1 = nums1.size();
            int n2 = nums2.size();
            if (n1 > n2)
            {
                swap(nums1, nums2);
                swap(n1, n2);
            }

            unordered_map<int, int> mp;
            vector<int> res;
            for (int i: nums1)
            {
                mp[i]++;
            }
            for (int i: nums2)
            {
                if (!mp[i]) continue;
                mp[i]--;
                res.emplace_back(i);
            }
            return res;
        }
};