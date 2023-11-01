#include <string.h>

char findTheDifference(char * s, char * t){
    int a[26];
    memset(a, 0, sizeof(a));
    for (int i = 0, len = strlen(t); i < len; i ++) {
        a[t[i] - 'a'] ++;
    }
    for (int i = 0, len = strlen(s); i < len; i ++) {
        a[s[i] - 'a'] --;
    }
    for (int i = 0; i < 26; i ++) {
        if (a[i] != 0) {
            return i + 'a';
        }
    }
    return '\0';
}
