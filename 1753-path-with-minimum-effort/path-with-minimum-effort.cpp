class Solution {
public:
    typedef pair<int, int> P;
    vector<vector<int>> directions = {{0, 1}, {1, 0}, {-1, 0}, {0, -1}};
    int minimumEffortPath(vector<vector<int>>& heights) {
        int n = heights.size(), m = heights[0].size();
        vector<vector<int>> result(n, vector<int>(m, INT_MAX));
        queue<P> q;
        q.push({0, 0});
        result[0][0] = 0;

        while (!q.empty()) {
            P p = q.front();
            q.pop();
            int x = p.first;
            int y = p.second;
            for (auto dir : directions) {
                int new_x = x + dir[0];
                int new_y = y + dir[1];
                int d = result[x][y];
                if (new_x < n && new_y < m && new_x >= 0 && new_y >= 0) {
                    int diff = max(abs(heights[new_x][new_y] - heights[x][y]),d);
                    if (result[new_x][new_y] > diff) {
                        result[new_x][new_y] = diff;
                        q.push({new_x, new_y});
                    }
                }
            }
        }
        return result[n - 1][m - 1];
    }
};