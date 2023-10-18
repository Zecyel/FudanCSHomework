int mySqrt(int x){
    if (x == 0) return 0;
    long long l = 1, r = x, ret = 1;
    while (l <= r) {
        long long mid = (l + r) / 2;
        if (mid <= x / mid) {
            ret = mid;
            l = mid + 1;
        } else
            r = mid - 1;
    }
    return (int)ret;
}