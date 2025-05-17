//
// Created by alpdi on 09/05/2025.
//
#include <stdio.h>
#define SIZE 6

int *search_last_occurrence( int A[], int n, int size)
{

    for( int i = size-1; i >= 0; i-- ){
        if( A[ i ] == n ){
            return A+i;
        }
    }
    return NULL;
}

int count_greater_elements( int* start, int* end, int threshold)
{
    int count = 0;
    for( int *i = start; i <= end; i++ )
    {
        if (*i>threshold)
        {
            count++;
        }
    }
    return count;
}

void insert_value_after_index( int A[], int size, int index, int value)
{
    for( int i = size-1; i >= index; i-- )
    {
        A[ i+1 ] = A[ i ];
    }

    A[ index ] = value;
}

int count_even_numbers_between( int* start, int* end)
{
    int count = 0;
    for( int *i = start; i <= end; i++ )
    {
        if (*i%2 == 0)
        {
            count++;
        }
    }
    return count;
}



void print_array( int A[], int size)
{
    for( int i = 0; i < size; i++ )
    {
        printf("%d ", A[ i ]);
    }
}
int main()
{

    int A[ SIZE ] = { 2, 3, 27, 2, 7, 1 };

    printf("Pointer to the last occurance: %p \n",search_last_occurrence( A, 7, SIZE ));
    printf("Greater elements then the threshold: %d \n",count_greater_elements( A, A+SIZE-3,2 ));
    printf("Even numbers between: %d \n",count_even_numbers_between( A, A+SIZE-2 ));

    insert_value_after_index( A, SIZE, 5, 'XXX' );
    print_array( A, SIZE+1 );

    return 0;
}