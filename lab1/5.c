#include <stdio.h>

int main(void) {
    int a, b;
    scanf("%d%d", &a, &b);
    int ans[25];
    int mod;
    ans[0] = a * 10 / b;
    mod = a * 10 % b;
    for (int i = 1; i < 20; ++i) {
        ans[i] = mod * 10 / b;
        mod = mod * 10 % b;
    }
    for (int i = 0; i < 20; ++i)
        printf("%d", ans[i]);
    puts("");
    return 0;
} 