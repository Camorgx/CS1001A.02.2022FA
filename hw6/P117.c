#include <ctype.h>
#include <stdio.h>

int main(void) {
    char ch;
    while (!isdigit(ch = getchar()));
    putchar(ch == '9' ? ch : ch + 1);
    while (isdigit(ch = getchar())) {
        putchar(ch == '9' ? '0' : ch + 1);
    }
    return 0;
}