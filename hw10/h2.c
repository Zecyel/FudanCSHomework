#define MOD 1000000007

long long qkpow(long long base, long long pow) {
    long long ret = 1;
    while (pow) {
        if (pow % 2 == 1) {
            ret = ret * base % MOD;
        }
        pow >>= 1;
        base = base * base % MOD;
    }
    return ret;
}

int countGoodNumbers(long long n) {
    return qkpow(4, n / 2) * qkpow(5, n / 2 + n % 2) % MOD;
}
