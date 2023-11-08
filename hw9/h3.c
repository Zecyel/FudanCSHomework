#include <stdlib.h>
#include <memory.h>

struct A{
    int cnt;
    int prev_indx;
};

int cmp(const void *a, const void *b) {
    return ((struct A *)b) -> cnt - ((struct A *)a) -> cnt;
}

int* topKFrequent(int* nums, int numsSize, int k, int* returnSize) {
    struct A a[20001];
    for (int i = 0; i <= 20000; i ++) {
        a[i].cnt = 0;
        a[i].prev_indx = i - 10000;
    }
    for (int i = 0; i < numsSize; i ++) {
        a[nums[i] + 10000].cnt ++;
    }
    qsort(a, 20001, sizeof(struct A), cmp);
    (*returnSize) = k;
    int *ret = (int *)malloc(k * sizeof(int));
    for (int i = 0; i < k; i ++) {
        ret[i] = a[i].prev_indx;
    }
    return ret;
}
