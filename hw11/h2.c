char* multiply(char* num1, char* num2) {
    int a[500];
    memset(a, 0, sizeof(a));
    int len1 = strlen(num1);
    int len2 = strlen(num2);
    for (int i = 0; i < len1; i ++) {
        for (int j = 0; j < len2; j ++) {
            a[len1 + len2 - i - j - 2] += (num1[i] - 48) * (num2[j] - 48);
        }
    }
    for (int i = 0; i < 498; i ++) {
        a[i + 1] += a[i] / 10;
        a[i] %= 10;
    }
    int len = 499;
    while (a[len] == 0 && len) len --;
    len ++;
    char *ret = (char *)malloc((len + 1) * sizeof(char));
    ret[len] = 0;
    for (int i = 0; i < len; i ++) {
        ret[i] = a[len - i - 1] + 48;
    }
    return ret;
}
