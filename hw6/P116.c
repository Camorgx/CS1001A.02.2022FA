#include <stdio.h>
unsigned long sums(int digit, int level);
int main(void) {
    int digit, level;
    unsigned long ssum = 0;
    printf("�����������������\n");
    scanf("%d%d", &digit, &level);
    if (digit < 0 || digit > 9 || level > 10) {
        puts("���벻�Ϸ�����������");
        return 1;
    }
    printf("s=");
    ssum = sums(digit, level);
    printf("%lu", ssum);
    return 0;
}
unsigned long sums(int digit, int level) {   
    unsigned long sum = 0;
    while(level--) {
        printf("%d%c", digit, level ? '+' : '=');
        sum += digit;
        digit = digit * 10 + digit % 10;
    }
    return sum;
}