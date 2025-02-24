//
// Created by alpdi on 2/21/2025.
//
#include <stdio.h>
    /* count characters in input; 1st version */
#include <stdio.h>

/* count characters in input; 1st version */
int main() {
    int c, nt, nl, nb;
    nt = 0;
    nl = 0;
    nb = 0;
    printf("press q to quit\n");
    while ((c = getchar()) != EOF) {
        if (c == 'q') {
            break;
        }
        if (c == '\n') {
            ++nl;
        }
        if (c == '\t') {
            ++nt;
        }
        if (c == ' ') {
            ++nb;
        }
    }
    printf("We have %d new lines, %d tabs, and %d blanks\n", nl, nt, nb);
    return 0;
}