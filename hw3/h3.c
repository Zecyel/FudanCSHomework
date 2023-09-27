#include <stdio.h>
#include <ctype.h>

void StringStatistics(char *str, int *numChars, int *numLines, int *numWords) {
    *numChars = 0;
    *numLines = 1;
    *numWords = 0;
    int state = 2; // 1 stands for 'word', 2 stands for 'whitespace'
    while (*str != '\0') {
        if (*str == '\n')
            (*numLines) ++;
        if (state == 1) {
            if (! isalpha(*str)) {
                state = 2;
                (*numWords) ++;
            }
        } else if (isalpha(*str))
            state = 1;
        str ++;
        (*numChars) ++;
    }
    if (state == 1)
        (*numWords) ++;
}

int main() {
    int chars, lines, words;
    StringStatistics("Hello, World.", &chars, &lines, &words);
    printf("chars: %d, lines: %d, words: %d\n", chars, lines, words);
    StringStatistics("  Hola.....C is \nGreat!\n", &chars, &lines, &words);
    printf("chars: %d, lines: %d, words: %d\n", chars, lines, words);
    StringStatistics("a b c.d", &chars, &lines, &words);
    printf("chars: %d, lines: %d, words: %d\n", chars, lines, words);
    return 0;
}
