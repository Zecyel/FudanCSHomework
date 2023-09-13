#include <stdio.h>
#include <stdbool.h>

int main() {
    int n;
    printf("Input number n: ");
    scanf("%d", &n);
    bool isPrime = n > 1;
    for (int i = 2; i < n; i++)
        if (n % i == 0) {
            isPrime = false;
            break;
        }
    printf(isPrime ? "%d is a prime" : "%d is not a prime", n);
    return 0;
}