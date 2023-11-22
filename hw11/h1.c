int strStr(char* haystack, char* needle) {
    char *start = haystack;
    for (; *haystack; haystack ++) {
        char *ptr1, *ptr2;
        for (ptr1 = haystack, ptr2 = needle; *ptr2 && *ptr1 == *ptr2; ptr1 ++, ptr2 ++);
        if (*ptr2 == 0) {
            return haystack - start;
        }
    }
    return -1;
}
