#include <stdio.h>
#include <stdbool.h>

int main() {
    int n;
    printf("Input number n: ");
    scanf("%d", &n);
    printf("Input %d real numbers: ", n);
    float min = 0;
    bool first = true;
    for (int i = 0; i < n; i++) {
        float x;
        scanf("%f", &x);
        if (x < min || first)
            min = x, first = false;
    }
    printf("The minimum is %.2f", min);
    return 0;
}