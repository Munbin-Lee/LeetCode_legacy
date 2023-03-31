class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> res(numRows);
        res[0].emplace_back(1);
        
        for (int i = 1; i < numRows; i++) {
            res[i].emplace_back(1);
            for (int j = 0; j + 1 < i; j++) {
                res[i].emplace_back(res[i - 1][j] + res[i - 1][j + 1]);
            }
            res[i].emplace_back(1);
        }
        return res;
    }
};