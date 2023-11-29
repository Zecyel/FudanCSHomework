#define min(a, b) ((a) < (b) ? (a) : (b))
#define INF 50000
#define m (gridSize)
#define n (gridColSize[0])
#define val(i, j) (((i) < 0 || (j) < 0) ? INF : grid[(i)][(j)])

int minPathSum(int** grid, int gridSize, int* gridColSize) {
    for (int i = 0; i < m; i ++) {
        for (int j = 0; j < n; j ++) {
            if (i != 0 || j != 0) {
                grid[i][j] += min(val(i - 1, j), val(i, j - 1));
            }
        }
    }
    return grid[m - 1][n - 1];
}
