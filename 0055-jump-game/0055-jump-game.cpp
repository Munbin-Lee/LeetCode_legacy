class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n = nums.size();
        int mn = 0;
        int mx = nums[0];
        if (mx >= n - 1) return true;
        
        while (mn <= mx) {
            int tmpMx = mx;
            for (int i = mn; i <= tmpMx; i++) {
                int cur = i + nums[i];
                if (cur >= n - 1) return true;
                mx = max(mx, cur);
            }
            mn = tmpMx + 1;
        }
        return false;
    }
};