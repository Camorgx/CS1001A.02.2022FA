#include <stdio.h>

#define cube(x) ((x) * (x) * (x))

int main(void) {
    int ans[10], cnt = 0;
    for (int i = 1; i < 10; ++i) {
        for (int j = 0; j < 10; ++j) {
            for (int k = 0; k < 10; ++k) {
                if (i * 100 + j * 10 + k == cube(i) + cube(j) + cube(k)) {
                    ans[cnt++] = i * 100 + j * 10 + k;
                }
            }
        }
    }
    for (int i = 0; i < cnt - 1; ++i) {
        printf("%d,", ans[i]);
    }
    printf("%d\n", ans[cnt - 1]);
    return 0;
}
