int f(int m, int n, int maxi, int row, int col, vector<vector<int>>& dp) {
    if (row < 0 or col < 0 or row == m or col == n) {
        return 1;
    }
    if (maxi == 0) return 0;
    
    if (dp[row][col] != -1) {
        return dp[row][col];
    }

    dp[row][col] = f(m, n, maxi - 1, row - 1, col, dp) +
                   f(m, n, maxi - 1, row + 1, col, dp) +
                   f(m, n, maxi - 1, row, col + 1, dp) +
                   f(m, n, maxi - 1, row, col - 1, dp);

    return dp[row][col];
}