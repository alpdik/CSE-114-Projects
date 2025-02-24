//
// Created by alpdi on 2/21/2025.
//
#include <stdio.h>

int main() {
    int c=5;
    printf("%d\n",c!=EOF);
    while (c!=EOF)
    {
        c = c - 1;
        printf("%d\n", c != EOF);
    }
    return 0;
}