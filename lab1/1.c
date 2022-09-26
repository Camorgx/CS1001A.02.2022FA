/*
    Author: Cao Gaoxiang
    Title: Lab 1.1
    Date: 2022/9/26
*/

#include <stdio.h>

int main(void) {
    long long n;
    scanf("%lld", &n);
    long long ans = 0;
    for (int i = 1; i <= n; ++i) {
        ans += i;
    }
    printf("%lld\n", ans);
    return 0;
}