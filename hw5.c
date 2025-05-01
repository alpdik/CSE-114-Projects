//
// Created by alpdi on 01/05/2025.
//
#include <stdio.h>
#define SIZE 9

int last_index(int A[], int size, int n)
{
    for( int i = size-1; i >= 0; i-- ){
        if( A[ i ] == n ){
            return i;
        }
    }
    return -1;
}

int first_index(int A[], int size, int n) {
    for( int i=0; i < size; i++ ){
        if( A[ i ] == n ){
            return i;
        }
    }
    return -1;
}




int count_in_array(int A[], int size, int n)
{
    int count = 0, index;
    index = last_index( A, size, n );


    while( index != -1 ){
        count++;
        index = last_index( A, index, n );
    }
    return count;
}
void reverse_array(int A[],int start, int size)
{
    int temp;
    for (int i=start; i < size/2; i++)
    {
        temp = A[i];
        A[i] = A[size-1-i];
        A[size-1-i] = temp;
    }
}

int partial_reverse(int A[], int size, int n)
{
    if (count_in_array(A, size, n)<2)
    {
        return -1;
    }

    int first = first_index(A, size, n);
    int last = last_index(A, size, n);

    if (last-first<=2)
    {
        return 0;
    }

    reverse_array(A, first+1, last+2);
    return 1;

}

void print_array( int A[], int size ){
    int i;
    for( i = 0; i < size; i++ ){
        printf( "%d ", A[ i ] );
    }
    printf( "\n" );
}


int main()
{
    int A[SIZE]={7, 81, 32 ,81, 69, 55, 47, 81, 75};
    int exit_code=partial_reverse(A,SIZE,81);
    printf("THE REVERSED ARRAY: ");
    print_array(A, SIZE);
    printf("THE EXIT CODE: %d\n", exit_code);

    return 0;
}