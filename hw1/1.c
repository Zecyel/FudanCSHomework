#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 0, j = 0; i < n; (j == n - 1) ? j = 0, i ++ : j ++)
        printf(j == n - 1 ? "*\n" : "*");
    return 0;
}

/* 双重循环才是正解 */
