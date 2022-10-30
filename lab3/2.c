#include <stdio.h>
#include <stdlib.h>

// Get an integer between low and high
int get_integer(int low, int high) {
    char input[20];
    int res = 0;
    while (1) {
        gets_s(input, 20);
        if (sscanf_s(input, "%d", &res) != 1 
            || res < low || res > high) {
            puts("Please check your input.");
            continue;
        }
        break;
    }
    return res;
}

int get_energy(void) {
    puts("Choose a green behavior.");
    puts("1. Walking.");
    puts("2. Offline payments.");
    puts("3. Purchasing train tickets online.");
    puts("4. Taking bus rides.");
    int behavior = get_integer(1, 4);
    int step_energy;
    if (behavior == 1) {
        printf("Input how many steps you've walked today: ");
        int steps = get_integer(0, INT_MAX);
        step_energy = min(steps, 18000) * 256 / 18000;
    }
    else if (behavior == 2) {
        printf("Input how many offline payments you've made today: ");
        int times = get_integer(0, INT_MAX);
        step_energy = min(times, 10) * 5;
    }
    else if (behavior == 3) {
        printf("Input how many train tickets you've purchased online this month: ");
        int times = get_integer(0, INT_MAX);
        step_energy = min(times, 10) * 136;
    }
    else {
        printf("Input how many bus rides you've taken today: ");
        int times = get_integer(0, INT_MAX);
        step_energy = min(times, 5) * 80;
    }
    system("cls");
    printf("You get %dg green energy through the green behavior.\n", step_energy);
    return step_energy;
}

int main(void) {
    int energy = 0;
    while (1) {
        puts("Program Menu");
        puts("1. Add green behavior.");
        puts("2. Display current green energy.");
        puts("3. Exit the program");

        int choice = get_integer(1, 3);
        if (choice == 1) energy += get_energy();
        else if (choice == 2) {
            system("cls");
            printf("You have %dg green energy now.\n", energy);
        }
        else {
            printf("You have %dg green energy in total.\n", energy);
            break;
        }
    }
    return 0;
}