bool isToeplitzMatrix(int** matrix, int matrixSize, int* matrixColSize){
    int a[10000];
    for (int i = 0; i < 10000; i ++) {
        a[i] = -1;
    }
    for (int i = 0; i < matrixSize; i ++) {
        for (int j = 0; j < matrixColSize[i]; j ++) {
            if (a[i - j + 200] == -1) {
                a[i - j + 200] = matrix[i][j];
            } else if (a[i - j + 200] != matrix[i][j]) {
                return false;
            }
        }
    }
    return true;
}
