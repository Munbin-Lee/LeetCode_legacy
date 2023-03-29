class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int fillColor = image[sr][sc];
        if (color == fillColor) return image;
        
        int m = image.size();
        int n = image[0].size();
        int dr[4] = {-1, 1, 0, 0};
        int dc[4] = {0, 0, -1, 1};
        queue<pair<int,int>> q;
        q.emplace(sr, sc);
        
        while (!q.empty()) {
            auto [r, c] = q.front();
            image[r][c] = color;
            q.pop();
            for(int i = 0; i < 4; i++) {
                int nr = r + dr[i];
                int nc = c + dc[i];
                if (nr == -1 || nr == m || nc == -1 || nc == n) continue;
                if (image[nr][nc] != fillColor) continue;
                q.emplace(nr, nc);
            }
        }
        return image;
    }
};