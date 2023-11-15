double qkpow(double base, int pow) {
    double ret = 1;
    while (pow) {
        if (pow % 2 == 1) {
            ret = ret * base;
        }
        pow >>= 1;
        base = base * base;
    }
    return ret;
}

double myPow(double x, int n) {
    if (n >= 0) {
        return qkpow(x, n);
    } else {
        return 1 / qkpow(x, -1-n) / x;
    }
}
