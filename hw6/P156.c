#include <stdio.h>

int gcd1(int a, int b) {
    return b == 0 ? a : gcd1(b, a % b);
}

int gcd2(int a, int b) {
    while (b) {
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}

int gcd3(int a, int b) {
    if (a == b) return a;
    if (a > b) a -= b;
    else b -= a; 
    return gcd3(a, b);
}

int gcd4(int a, int b) {
    while (a != b) {
        if (a > b) a -= b;
        else b -= a;
    }
    return a;
}

int main() {
    int a = 20, b = 8;
    printf("gcd1 = %d\n", gcd1(a, b));
    printf("gcd2 = %d\n", gcd2(a, b));
    printf("gcd3 = %d\n", gcd3(a, b));
    printf("gcd4 = %d\n", gcd4(a, b));
    return 0;
}