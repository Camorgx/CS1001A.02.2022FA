/*
    Author: Cao Gaoxiang
    Title: Lab 1.3
    Date: 2022/9/26
*/

#include <stdio.h>

int main(void) {
    int pos_cnt = 0, neg_cnt = 0;
    float pos_sum = 0, neg_sum = 0;
    for (int i = 0; i < 10; ++i) {
        float x;
        scanf("%f", &x);
        if (x > 0) {
            ++pos_cnt;
            pos_sum += x;
        }
        else if (x < 0) {
            ++neg_cnt;
            neg_sum += x;
        }
    }
    printf("Count of positive numbers: %d\n", pos_cnt);
    printf("Sum of positive numbers: %g\n", pos_sum);
    printf("Count of positive numbers: %d\n", neg_cnt);
    printf("Sum of positive numbers: %g\n", neg_sum);
    return 0;
}