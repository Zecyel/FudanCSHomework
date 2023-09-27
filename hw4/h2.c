#include <stdio.h>

void ToLowerCase(char *str) {
    while (*str != '\0') {
        if (*str >= 'A' && *str <= 'Z')
            *str = *str + 32;
        str ++;
    }
}

int main() {
    char str[] = "Hello World!";
    ToLowerCase(str);
    printf("%s", str);
    return 0;
}