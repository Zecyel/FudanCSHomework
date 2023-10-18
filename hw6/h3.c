#include <memory.h>
#include <string.h>

char * decodeMessage(char * key, char * message){
    int n = strlen(message);
    char *ret = (char *)malloc(sizeof(char) * (n + 1));
    int a[27], cnt = 0;
    memset(a, 0, sizeof(a));
    for (; key[0]; key ++) {
        if (key[0] == ' ') {
            continue;
        }
        if (a[key[0] & 31] == 0) {
            a[key[0] & 31] = ++ cnt;
        }
    }
    for (int i = 0; i < n; ++ i) {
        if (message[i] == ' ') {
            ret[i] = ' ';
        } else {
            ret[i] = a[message[i] & 31] | 96;
        }
    }
    ret[n] = '\0';
    return ret;
}