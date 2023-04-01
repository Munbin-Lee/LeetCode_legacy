class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        if (n == 1) return nums[0];
        if (n == 2) return max(nums[0], nums[1]);
        
        vector<int> memo(n);
        memo[0] = nums[0];
        memo[1] = nums[1];
        memo[2] = nums[0] + nums[2];
        int maxMoney = max(memo[1], memo[2]);
        
        for (int i = 3; i < n; i++) {
            memo[i] = max(memo[i - 2], memo[i - 3]);
            memo[i] += nums[i];
            maxMoney = max(maxMoney, memo[i]);
        }
        return maxMoney;
    }
};