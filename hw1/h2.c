#include <stdio.h>

int main() {
    printf("Input 3 integers: ");
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    int max = a, min = a;
    if (b > max) max = b;
    if (b < min) min = b;
    if (c > max) max = c;
    if (c < min) min = c;
    printf("The minimum is %d\n", min);
    printf("The maximum is %d\n", max);
    return 0;
}
