bool check(int i, int j, int n, vector<vector<int>> &board) {
    for (int k = i; k >= 0; k--) {
        if (board[k][j]) return 0;
    }

    for (int k = 0; i - k >= 0 && j - k >= 0; k++) {
        if (board[i - k][j - k]) return 0;
    }

    
    for (int k = 0; i - k >= 0 && j + k < n; k++) {
        if (board[i - k][j + k]) return 0;
    }

    return 1;
}

void rec(int i, int n, vector<vector<int>> &board, vector<vector<int>> &ans) {
    if (i == n) {
        vector<int> v;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                v.push_back(board[i][j]);
            }
        }
        ans.push_back(v);
        return;
    }
    for (int j = 0; j < n; j++) {
        if (check(i, j, n, board)) {
            board[i][j] = 1;
            rec(i + 1, n, board, ans);
            board[i][j] = 0;
        }
    }
}

vector<vector<int>> solveNQueens(int n) {
    // Write your code here.
    vector<vector<int>> board(n, vector<int> (n, 0));    
    vector<vector<int>> ans;
    rec(0, n, board, ans);
    return ans;
}
