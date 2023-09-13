#include <stdio.h>

int main() {
    int n;
    printf("Input number n: ");
    scanf("%d", &n);
    printf("Input %d numbers: ", n);
    int sum = 0;
    for (int i = 0; i < n; i++) {
        int num;
        scanf("%d", &num);
        sum += num;
    }
    printf("The sum is %d", sum);
    return 0;
}