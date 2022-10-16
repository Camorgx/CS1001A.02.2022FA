#include <stdio.h>

#define cube(x) ((x) * (x) * (x))

int main(void) {
    int notFirst = 0;
    for (int i = 1; i < 10; ++i) {
        for (int j = 0; j < 10; ++j) {
            for (int k = 0; k < 10; ++k) {
                if (i * 100 + j * 10 + k == cube(i) + cube(j) + cube(k)) {
                    printf("%s%d", notFirst ? "," : "", i * 100 + j * 10 + k);
                    notFirst = 1;
                }
            }
        }
    }
    return 0;
}