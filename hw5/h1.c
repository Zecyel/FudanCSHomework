#include <memory.h>
#include <string.h>

int* plusOne(int* digits, int digitsSize, int* returnSize){
    int *ret = (int *)malloc((digitsSize + 1) * sizeof(int));
    *ret = 0;
    memcpy(ret + 1, digits, digitsSize * sizeof(int));
    int *cur = ret + digitsSize;
    // printf("%p -> %d -> %p", ret, digitsSize, cur);
    (*cur) += 1;
    while ((*cur) >= 10) {
        (*cur) -= 10;
        cur -= 1;
        (*cur) += 1;
    }
    if (cur == ret) {
        (*returnSize) = digitsSize + 1;
        return ret;
    } else {
        (*returnSize) = digitsSize;
        // memcpy(ret, ret + 1, digitsSize * sizeof(int));
        // realloc(ret, digitsSize * sizeof(int));
        return ret + 1;
        // return ret;
    }
}