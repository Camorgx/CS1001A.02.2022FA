#include <ctype.h>
#include <stdio.h>
#include <string.h>

// Get characters in a cirtain letter set, ignoring \n
// Return lower case of the input letter
char input_char(const char* expect) {
    char res = '\n';
    while (1) {
        res = getchar();
        if (res == '\n') continue;
        if (!(isalpha(res) && strchr(expect, tolower(res))))
            puts("Please check your input.");
        else break;
    }        
    return tolower(res);
}

int main(void) {
    double father_height, mother_height;
    while(1) {
        printf("Input father's height (m): ");
        scanf_s("%lf", &father_height);
        printf("Input mother's height (m): ");
        scanf_s("%lf", &mother_height);
        if (father_height < 0 || mother_height < 0) {
            puts("Invalid height. Please input again");
        }
        break;
    }
    const char* male_or_female = "mf";
    const char* yes_or_no = "yn";
    printf("Please input the gender of the child (m/f): ");
    char gender = input_char(male_or_female);
    printf("Does the %s like exercising (y/n): ", gender == 'f' ? "girl" : "boy");
    char exercise = input_char(yes_or_no);
    printf("Does the %s have good habits (y/n): ", gender == 'f' ? "girl" : "boy");
    char have_good_habits = input_char(yes_or_no);

    double base = (gender == 'f') 
        ? (father_height * 0.923 + mother_height) /2
        : (father_height + mother_height) * 0.54;
    double multiply = 1;
    if (exercise == 'y') multiply += 0.02;
    if (have_good_habits == 'y') multiply += 0.015;

    printf("Desired height of the child is %gm.\n", base * multiply);
    return 0;
}