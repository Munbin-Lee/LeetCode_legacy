class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        vector<vector<int>> res;
        
        for (int i = 0; i + 3 < n; i++) {
            for(int j = i + 1; j + 2 < n; j++) {
                int lo = j + 1;
                int hi = n - 1;
                while (lo < hi) {
                    long long int sum = (long long int) nums[i] + nums[j] + nums[lo] + nums[hi];
                    if (sum == target) {
                        res.emplace_back(
                            vector<int>{nums[i], nums[j], nums[lo], nums[hi]}
                        );
                        do{lo++;}while(nums[lo]==nums[lo-1]&&lo<hi);
                        do{hi--;}while(nums[hi]==nums[hi+1]&&lo<hi);
                        continue;
                    }
                    (sum < target)? lo++: hi--;
                }
            }
        }
        sort(res.begin(), res.end());
        res.erase(unique(res.begin(), res.end()), res.end());
        return res;
    }
};