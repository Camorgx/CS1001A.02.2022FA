#include <stdio.h>

int is_prime(int n) {
    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0) return 0;
    }
    return 1;
}

int main(void) {
    int n;
    scanf_s("%d", &n);
    for (int i = 1; i * i <= n; ++i) {
        if (n % i == 0) {
            int factor = n / i;
            if (is_prime(i) && is_prime(factor)) {
                printf("%d = %d * %d\n", n, i, factor);
                return 0;
            }
        }
    }
    printf("%d cannot be divided into two prime numbers.\n", n);
    return 0;
}
