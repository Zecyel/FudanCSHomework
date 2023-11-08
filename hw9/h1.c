#include <string.h>
#include <memory.h>

const int dire[4][2] = {{ 0, 1 }, { 1, 0 }, { 0, -1 }, { -1, 0 }};

int* spiralOrder(int** matrix, int matrixSize, int* matrixColSize, int* returnSize) {
    int m = matrixSize, n = matrixColSize[0];
    int d = 0;
    (*returnSize) = m * n;
    int *ret = (int *)malloc(m * n * sizeof(int));
    int cur_pos_x = 0, cur_pos_y = 0;
    for (int i = 0; i < m * n; i ++) {
        ret[i] = matrix[cur_pos_x][cur_pos_y];
        matrix[cur_pos_x][cur_pos_y] = -1000;

        int nxt_pos_x = cur_pos_x + dire[d][0];
        int nxt_pos_y = cur_pos_y + dire[d][1];
        if (nxt_pos_x < 0 || nxt_pos_x >= m || nxt_pos_y < 0 || nxt_pos_y >= n || matrix[nxt_pos_x][nxt_pos_y] == -1000) {
            d = (d + 1) & 3;
        }
        cur_pos_x += dire[d][0];
        cur_pos_y += dire[d][1];
    }
    return ret;
}
