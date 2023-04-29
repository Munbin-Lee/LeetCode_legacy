class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int cnt = 0;
        
        for (int i : nums) {
            if (i == val) cnt++;
        }
        
        int maxLen = n - cnt;
        int curLen = 0;
        int lo = 0;
        int hi = 0;
        
        while (curLen < maxLen) {
            while (nums[hi] == val) hi++;
            if (nums[lo] == val) swap(nums[lo], nums[hi]);
            lo++;
            hi = lo;
            curLen++;
        }
        
        return maxLen;
    }
};