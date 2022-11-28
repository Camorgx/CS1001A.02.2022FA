#include <stdio.h>

void string_filter(char s[]) {
    while (*s) {
        int cnt = 1;
        while (s[1] == s[0]) {
            ++s;
            ++cnt;
        }
        if (cnt > 1)
            printf("%d", cnt);
        putchar(*s++);
    }
}

int main(void) {
    char s[20];
    gets_s(s, 20);
    string_filter(s);
    return 0;
}