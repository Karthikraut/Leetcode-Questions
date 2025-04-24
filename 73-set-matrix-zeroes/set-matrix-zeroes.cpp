class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        unordered_set<int> zeroRows;
        unordered_set<int> zeroCols;

        // First pass: identify all rows and columns that should be zero
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                if (matrix[i][j] == 0) {
                    zeroRows.insert(i);
                    zeroCols.insert(j);
                }
            }
        }

        // Second pass: set rows to zero
        for (int row : zeroRows) {
            for (int j = 0; j < n; ++j) {
                matrix[row][j] = 0;
            }
        }

        // Third pass: set columns to zero
        for (int col : zeroCols) {
            for (int i = 0; i < m; ++i) {
                matrix[i][col] = 0;
            }
        }
    }
};
