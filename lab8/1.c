#include <stdio.h>

void get_string(char* s, int max_len) {
    int cnt = 0;
    char ch;
    while (cnt < max_len && (ch = getchar()) != '\n') {
        ++cnt;
        *(s++) = ch;
    }
    *s = '\0';
}

void inverse_output(char* s) {
    if (*s == '\0') return;
    inverse_output(s + 1);
    putchar(*s);
}

int main() {
    char s[21];
    get_string(s, 20);
    inverse_output(s);
    return 0;
}
