#include <stdio.h>

void get_string(char s[], int max_len) {
    char ch;
    int cnt = 0;
    while (cnt < max_len && (ch = getchar()) != '\n')
        s[cnt++] = ch;
    s[cnt] = '\0';
}

void remove_char(char s[], char ch) {
    for (; *s; ++s) {
        if (*s == ch) {
            char* p = s + 1;
            while (*p) {
                while (*p == ch) ++p;
                *s++ = *p++;
            }
            *s = '\0';
            return;
        }
    }
}

int main(void) {
    char s[20];
    get_string(s, 19);
    char ch = getchar();
    remove_char(s, ch);
    puts(s);
    return 0;
}