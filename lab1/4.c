/*
    Author: Cao Gaoxiang
    Title: Lab 1.4
    Date: 2022/9/26
*/

#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(void) {
    char num[10];
    gets_s(num, 10);
    size_t len = strlen(num);
    if (len > 4 || (len == 4 && num[0] != '-')) {
        puts("Invalid input!");
        return 1;
    }
    int offset = num[0] == '-' ? 1 : 0, ans = 0;
    int flag = 0;
    for (int i = 0; i < 3; ++i) {
        if (isdigit(num[i + offset])
            && (flag || num[i + offset] - '0')) {
            flag = 1;
            ans += num[i + offset] - '0';
        }
        else {
            puts("Invalid input!");
            return 1;
        }
    }
    printf("%d\n", ans);
    return 0;
}