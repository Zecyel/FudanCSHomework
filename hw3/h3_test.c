#include <stdio.h>
#include "h3.c"

int main() {
    int chars, lines, words;
    StringStatistics("Hello, World.", &chars, &lines, &words);
    printf("chars: %d, lines: %d, words: %d\n", chars, lines, words);
    StringStatistics("  Hola.....C is \nGreat!\n", &chars, &lines, &words);
    printf("chars: %d, lines: %d, words: %d\n", chars, lines, words);
    return 0;
}
