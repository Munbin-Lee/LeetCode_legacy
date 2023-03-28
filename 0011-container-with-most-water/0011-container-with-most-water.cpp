class Solution
{
    public:
        int maxArea(vector<int> &height)
        {
            int n = height.size();
            int lo = 0;
            int hi = n - 1;
            int maxArea = 0;

            while (lo < hi)
            {
                int area = (hi - lo) * min(height[lo], height[hi]);
                maxArea = max(maxArea, area);
                (height[lo] < height[hi]) ? lo++ : hi--;
            }
            return maxArea;
        }
};