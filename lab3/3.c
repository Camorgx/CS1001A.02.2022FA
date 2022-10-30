#include <stdio.h>

int double_loop(int n) {
    int sum = 0;
    for (int i = 1; i <= n; ++i) {
        int factor = 1;
        for (int j = 1; j <= i; ++j) {
            factor *= j;
        }
        sum += factor;
    }
    return sum;
}

int single_loop(int n) {
    int sum = 0;
    int fact = 1;
    for (int i = 1; i <= n; ++i) {
        fact *= i;
        sum += fact;
    }
    return sum;
}

int main(void) {
    int n;
    scanf_s("%d", &n);
    if (n >= 13) {
        puts("Integer too large!");
        return 1;
    }
    printf("Using single loop: %d\n", single_loop(n));
    printf("Using double loop: %d\n", double_loop(n));
    return 0;
}