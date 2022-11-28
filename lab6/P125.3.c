#include <stdio.h>

double func_fac(int n) {
    double res = 1;
    for (int i = 1; i <= n; ++i)
        res *= i;
    return res;
}

double func_pow(int x, int n) {
    double res = 1;
    for (int i = 0; i < n; ++i)
        res *= x;
    return res;
}

double func_sum(int x, int n) {
    double res = 0;
    for (int i = 0; i <= n; ++i) {
        res += func_pow(x, i) / func_fac(i);
    }
    return res;
}

int main(void) {
    int x = 1, n = 10;
    printf("%g\n", func_sum(x, n));
    return 0;
}
