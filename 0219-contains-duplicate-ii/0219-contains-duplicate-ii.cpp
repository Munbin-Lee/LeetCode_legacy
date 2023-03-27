class Solution
{
    public:
        bool containsNearbyDuplicate(vector<int> &nums, int k)
        {
            unordered_map<int, int> mp;	// num, lastIdx
            for (int i = 0; i < nums.size(); i++)
            {
                int num = nums[i];
                if (mp.find(num) != mp.end() && i - mp[num] <= k) return true;
                mp[num] = i;
            }
            return false;
        }
};