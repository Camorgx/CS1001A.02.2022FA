/*
    Author: Cao Gaoxiang
    Title: Lab 1.4
    Date: 2022/9/26
*/

#include <math.h>
#include <stdio.h>
#include <string.h>

int main(void) {
    char num[10];
    gets_s(num, 10);
    int n;
    size_t len = strlen(num);
    if (len > 4 || (len == 4 && num[0] != '-')
        || sscanf(num, "%d", &n) != 1) {
        puts("Invalid input!");
        return 1;
    }
    n = abs(n);
    if (!(n >= 100 & n < 1000)) {
        puts("Invalid input!");
        return 1;
    }
    printf("%d\n", n / 100 + n / 10 % 10 + n % 10);
    return 0;
}