#include <stdio.h>

long long BinomialCoefficient(int n, int m) {
    long long ret = 1;
    for (int i = 0; i < m; i++) {
        ret *= (n - i);
        ret /= (i + 1);
    }
    return ret;
}

int main() {
    printf("%lld\n", BinomialCoefficient(5, 2));
    printf("%lld\n", BinomialCoefficient(10, 5));
    printf("%lld\n", BinomialCoefficient(10, 9));
    // printf("%lld\n", BinomialCoefficient(100, 50));
    return 0;
}