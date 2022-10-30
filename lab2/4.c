#include <stdio.h>

int main(void) {
    int totalCnt = 0;
    for (int i = 100; i <= 200; ++i) {
        if (i % 3 != 0 && i % 5) {
            printf("%d ", i);
            ++totalCnt;
            if (totalCnt % 8 == 0) {
                puts("");
            }
        }
    }
    if (totalCnt % 8) {
        puts("");
    }
    printf("Count of numbers: %d\n", totalCnt);
    return 0;
}