#include <ctype.h>
#include <stdio.h>

int main(void)
{
    char s[16];
    scanf_s("%s", s, 16);
    if (s[0] != '_' && !isalpha(s[0]))
    {
        puts("Invalid!");
        return 0;
    }
    for (char *i = s; *i; ++i)
    {
        if (isalpha(*i) || isdigit(*i) || *i == '_')
            continue;
        puts("Invalid!");
        return 0;
    }
    puts("Valid!");
    return 0;
}