class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        if (n == 1) return nums[0];
        if (n == 2) return max(nums[0], nums[1]);
        if (n == 3) return max({nums[0], nums[1], nums[2]});
        
        array<vector<int>, 3> memo; // start, end
        for(auto &i : memo) {
            i.resize(n);
        }
        memo[0][0] = nums[0];
        memo[1][1] = nums[1];
        memo[2][2] = nums[2];
        memo[0][2] = nums[0] + nums[2];
        int maxMoney = max(nums[0] + nums[2], nums[1]);
        
        for (int i = 3; i < n - 1; i++) {
            for (int j = 0; j < 3; j++) {
                memo[j][i] = max(memo[j][i - 2], memo[j][i - 3]);
                memo[j][i] += nums[i];
                maxMoney = max(maxMoney, memo[j][i]);
            }
        }
        
        for (int i = 1; i <= 2; i++) {
            memo[i][n - 1] = max(memo[i][n - 3], memo[i][n - 4]);
            memo[i][n - 1] += nums[n - 1];
            maxMoney = max(maxMoney, memo[i][n - 1]);
        }
        return maxMoney;
    }
};