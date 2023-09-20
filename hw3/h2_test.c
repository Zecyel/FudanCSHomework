#include <stdio.h>
#include "h2.c"

void pretty_print(int n, int a[]) {
    printf("n = %d, a = ", n);
    for (int i = n; i; -- i)
        printf("%d", a[i]);
    printf(".\n");
}

int main() {
    int n, a[10];
    ToBinary(8, &n, a);
    pretty_print(n, a);
    ToBinary(0, &n, a);
    pretty_print(n, a);
    ToBinary(21, &n, a);
    pretty_print(n, a);
    return 0;
}
