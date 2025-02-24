//
// Created by alpdi on 2/21/2025.
//
#include <stdio.h>
main() {
    double celsius, fahr;
    int lower, upper, step;
    lower = 0;
    upper = 300;
    step = 20;
    celsius = lower;
    printf("    C\t   F\n");
    while (celsius <= upper) {
        fahr = (celsius * 9 / 5) + 32;
        printf("%5.f \t %5.1f \n", celsius, fahr);
        celsius = celsius + step;
    }
}