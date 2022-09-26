/*
    Author: Cao Gaoxiang
    Title: Lab 1.4
    Date: 2022/9/26
*/

#include <math.h>
#include <stdio.h>

int main(void) {
    int n;
    int res = scanf("%d", &n);
    if (res != 1) {
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