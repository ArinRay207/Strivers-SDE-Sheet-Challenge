#include <bits/stdc++.h>

void setZeros(vector<vector<int>> &matrix)
{
	// Write your code here.
	int n = matrix.size();	
	int m = matrix[0].size();
	vector<bool> r(n, 0), c(m, 0);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (!matrix[i][j]) {
				r[i] = 1;
				c[j] = 1;
			}
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (r[i] || c[j]) {
				matrix[i][j] = 0;
			}
		}
	}
}
