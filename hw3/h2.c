void ToBinary(int n, int *len, int *digits) {
    *len = -1;
    do {
        (*len) ++;
        digits[*len] = n % 2;
        n /= 2;
    } while (n != 0);
}
