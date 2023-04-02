class Solution {
public:
    int deleteAndEarn(vector<int>& nums) {
        array<int, 10001> cnt{}, memo{};
        for (int i : nums) {
            cnt[i]++;
        }
        
        memo[1] = cnt[1];
        memo[2] = max(memo[1], cnt[2] * 2);
        for (int i = 3; i <= 10000; i++) {
            memo[i] = max(memo[i - 1],
                          memo[i - 2] + cnt[i] * i);
        }
        return memo[10000];
    }
};