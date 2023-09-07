#include <stdio.h>

int main() {
    printf("Input n: ");
    int n;
    scanf("%d", &n);
    unsigned long long sum = 0;
    for (int i = 1; i <= n; ++ i)
        sum += i;
    printf("1+2+...+%d = %llu", n, sum);
    return 0;
}
