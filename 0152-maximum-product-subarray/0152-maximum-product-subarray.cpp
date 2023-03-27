class Solution {
public:
    int maxProduct(vector<int>& nums) {
        pair<int, int> prod = {nums[0], nums[0]}; // min max
        int maxProd = nums[0];
        
        for(int i = 1; i < nums.size(); i++) {
            auto [ pf, ps ] = prod;
            prod.first = min({pf * nums[i], ps * nums[i], nums[i]});
            prod.second = max({pf * nums[i], ps * nums[i], nums[i]});
            maxProd = max(maxProd, prod.second);
        }
        return maxProd;
    }
};