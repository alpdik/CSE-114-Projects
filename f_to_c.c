//
// Created by alpdi on 2/21/2025.
//
#include <stdio.h>
main() {
    double fahr, celsius;
    int lower, upper, step;
    lower = 0;
    upper = 300;
    step = 20;
    fahr = lower;
    printf("    F\t   C\n");
    while (fahr <= upper) {
        celsius = 5 * (fahr - 32) / 9;
        printf("%5.f \t %5.1f \n", fahr, celsius);
        fahr = fahr + step;
    }
}