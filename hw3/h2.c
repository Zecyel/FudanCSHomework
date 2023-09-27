#include <stdio.h>

// Caution: The memory is allocated by the caller instead of callee.

void ToBinary(int n, int *len, int *digits) {
    if (n == 0) {
        *len = 1;
        digits[0] = 0;
        return;
    }
    *len = -1;
    do {
        (*len) ++;
        digits[*len] = n % 2;
        n /= 2;
    } while (n != 0);
}

void pretty_print(int n, int len, int a[]) {
    printf("n = %d, len = %d, a = ", n, len);
    for (int i = len; i; -- i)
        printf("%d", a[i]);
    printf(".\n");
}

int main() {
    int n, a[10];
    ToBinary(8, &n, a);
    pretty_print(8, n, a);
    ToBinary(0, &n, a);
    pretty_print(0, n, a);
    ToBinary(21, &n, a);
    pretty_print(21, n, a);
    return 0;
}
