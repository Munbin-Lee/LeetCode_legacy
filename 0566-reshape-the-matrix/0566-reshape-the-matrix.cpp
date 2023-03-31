class Solution {
public:
    int m, n;
    
    int getNumByIdx(vector<vector<int>>& mat, int cnt) {
        int y = cnt / n;
        int x = cnt % n;
        
        return mat[y][x];
    }
    
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        m = mat.size();
        n = mat[0].size();
        if (m * n != r * c) return mat;
        
        vector<vector<int>> res(r, vector<int>(c));
        int cnt = 0;
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                res[i][j] = getNumByIdx(mat, cnt++);
            }
        }
        return res;
    }
};