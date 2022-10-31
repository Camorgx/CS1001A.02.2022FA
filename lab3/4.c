#include <ctype.h>
#include <stdio.h>

int main() {
    char identifier[17];
    scanf("%s", identifier);
    if (!(isalpha(identifier[0]) || identifier[0] == '_')) {
        puts("Invalid identifier.");
        return 1;
    }
    for (int i = 1; identifier[i] != '\0'; ++i) {
        if (!(identifier[i] == '_' || isalnum(identifier[i]))) {
            puts("Invalid identifier.");
            return 1;
        }
    }
    puts("Valid identifier.");
    return 0;
}