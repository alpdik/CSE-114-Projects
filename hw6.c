#include <stdio.h>
#define SIZE 5

int *start(int *first, int size) {
    for (int i = 0; i < size; i++) {
        if (*(first + i) == 0) {
            return first + i;
        }
    }

}

int *end(int *last, int size) {
    for (int i = 0; i < size; i++) {
        if (*(last - i) == 0) {
            return last - i;
        }
    }
}

void print_reverse(int *p, int *q) {
    for (int *x = q; x >= p; x--) {
        printf("%d ", *x);
    }
    printf("\n");
}

int main() {
    int A[SIZE] = {1, 0, 0, 1, 1};
    int *first = A;
    int *last = A + SIZE - 1;

    print_reverse(first, last);

    int *zero_first = start(first, SIZE);
    int *zero_last = end(last, SIZE);

    print_reverse(zero_first, zero_last);

    return 0;
}