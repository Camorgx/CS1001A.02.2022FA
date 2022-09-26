/*
    Author: Cao Gaoxiang
    Title: Lab 1.2
    Date: 2022/9/26
*/

#include <stdio.h>

int main(void) {
    for (int x = 0; x < 10; ++x) {
        if ((10 * x + 3) * 6528 == (30 + x) * 8256) {
            printf("x = %d\n", x);
            break;
        }
    }
    return 0;
}