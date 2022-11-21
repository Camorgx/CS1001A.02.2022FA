#include <stdio.h>

int charsIndex(char* s1, char* s2) {
    int res = 0;
    for (char* p = s1; *p; ++p) {
        if (*p == *s2) {
            char *p1 = p, *p2 = s2;
            while (*p1 && *p2) {
                if (*p1 != *p2) break;
                ++p1; ++p2;
            }
            if (*p2 == '\0') return res;
        }
        ++res;
    }
    return -1;
}

int main() {
    char s1[21], s2[21];
    scanf_s("%s%s", s1, 21, s2, 21);
    printf("%d\n", charsIndex(s1, s2));
    return 0;
}
