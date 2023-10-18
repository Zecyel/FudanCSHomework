#include <memory.h>
#include <string.h>
#include <stdbool.h>
#define MAX_DIGIT 200

char * convertToBase7(int num){
    bool negative = (num < 0) ? (num = -num, true) : false;
    int digit[MAX_DIGIT];
    int cur = MAX_DIGIT - ((num == 0) ? (digit[MAX_DIGIT - 1] = 0, 1): 0);
    while (num) {
        cur --;
        digit[cur] = num % 7;
        num /= 7;
    }
    printf("%d", cur);
    char *ret = (char *)malloc(sizeof(char) * (MAX_DIGIT - cur + negative + 1));
    if (negative) {
        ret[0] = '-';
        ret += 1;
    }
    for (int i = 0, *offset = digit + cur; i < MAX_DIGIT - cur; ++ i) {
        ret[i] = offset[i] + 48;
    }
    ret[MAX_DIGIT - cur] = '\0';
    // memcpy(ret, digit + cur, MAX_DIGIT - cur);
    return ret - negative;
}