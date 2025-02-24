//
// Created by alpdi on 2/21/2025.
//
#include <stdio.h>

main()

{
    #define UPPER 300
    #define LOWER 0
    #define STEP 20

    int fahr;
    for (fahr = UPPER; fahr >=LOWER; fahr=fahr-STEP)
        printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
}