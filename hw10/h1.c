#include <stdbool.h>

void dfs(int **ret, int *cnt, const int* const num, const int n, int *hist, bool *used, int cur) {
    if (cur == n) {
        for (int i = 0; i < n; i ++) {
            ret[*cnt][i] = hist[i];
        }
        (*cnt) ++;
        return;
    }

    for (int i = 0; i < n; i ++) {
        if (! used[i]) {
            used[i] = true;
            hist[cur] = num[i];
            dfs(ret, cnt, num, n, hist, used, cur + 1);
            used[i] = false;
        }
    }
}

int** permute(int* nums, int numsSize, int* returnSize, int** returnColumnSizes) {
    (*returnSize) = 1;
    for (int i = 2; i <= numsSize; i ++) {
        (*returnSize) *= i;
    }
    int **ret = (int **)malloc((*returnSize) * sizeof(int *));
    for (int i = 0; i < (*returnSize); i ++) {
        ret[i] = (int *)malloc(numsSize * sizeof(int));
    }

    *returnColumnSizes = (int *)malloc((*returnSize) * sizeof(int));
    for (int i = 0; i < (*returnSize); i ++) {
        (*returnColumnSizes)[i] = numsSize;
    }

    int per = 0;
    int *hist = (int *)malloc(numsSize * sizeof(int));
    bool *used = (bool *)malloc(numsSize * sizeof(bool));
    memset(used, 0, numsSize * sizeof(bool));
    dfs(ret, &per, nums, numsSize, hist, used, 0);

    return ret;
}
