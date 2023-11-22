void swap4(int *a, int *b, int *c, int *d) {
    int tmp = *d;
    *d = *c;
    *c = *b;
    *b = *a;
    *a = tmp;
}

void doSwap(int x, int y, int n, int **matrix) {
    n -= 1;
    swap4(&matrix[x][y],
          &matrix[y][n - x],
          &matrix[n - x][n - y],
          &matrix[n - y][x]);
}

void rotate(int** matrix, int matrixSize, int* matrixColSize) {
    int n = matrixSize;
    for (int i = 0; i < n / 2; i ++) {
        for (int j = 0; j < (n + 1) / 2; j ++) {
            doSwap(i, j, n, matrix);
        }
    }
}
