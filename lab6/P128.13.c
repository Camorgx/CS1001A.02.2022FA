#include <stdio.h>
#include <string.h>

int udf_substr(char str[], char substr[]) {
    int str_len = (int) strlen(str);
    int substr_len = (int) strlen(substr);
    int res = 0;
    for (int i = 0; str_len - i >= substr_len; ++i) {
        int equal = 1;
        for (int j = 0; j < substr_len; ++j) {
            if (str[i + j] != substr[j]) {
                equal = 0;
                break;
            }
        }
        res += equal;
    }
    return res;
}

int main(void) {
    char str[20], substr[20];
    gets_s(str, 20);
    gets_s(substr, 20);
    printf("%d\n", udf_substr(str, substr));
    return 0;
}