#include <bits/stdc++.h>

int minSumPath(vector<vector<int>> &grid) {
    // Write your code here.
    int n = grid.size(), m = grid[0].size();
    for (int i = n - 1; i >= 0; i--) {
        for (int j = m - 1; j >= 0; j--) {
            int a = INT_MAX;
            if (i + 1 < n) a = min(a, grid[i + 1][j]);            
            if (j + 1 < m) a = min(a, grid[i][j + 1]);
            if (a != INT_MAX) grid[i][j] += a;
        }
    }
    return grid[0][0];
}um
