class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        int lo = 1;
        int hi = 1;
        int unique = 1;
        
        while (lo < n) {
            while (nums[lo - 1] == nums[hi]) {
                hi++;
                if (hi >= n) return unique;
            }
            nums[lo] = nums[hi];
            lo++;
            unique++;
        }
        return unique;
    }
};