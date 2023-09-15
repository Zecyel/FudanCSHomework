#include <stdio.h>
#include <stdbool.h>

bool isPrime(int n) {
    if (n < 2)
        return false;
    for (int i = 2; i * i <= n; ++ i)
        if (n % i == 0)
            return false;
    return true;
}

int main() {
    int n;
    printf("Input number n: ");
    scanf("%d", &n);
    printf(isPrime(n) ? "%d is a prime" : "%d is not a prime", n);
    return 0;
}