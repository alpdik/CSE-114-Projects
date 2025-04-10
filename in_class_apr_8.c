//
// Created by alpdi on 08/04/2025.
//

#include <stdio.h>
#define SIZE 6

void print_array( int A[], int size ){
    int i;
    for( i = 0; i < size; i++ ){
        printf( "%d ", A[ i ] );
    }
    printf( "\n" );
}

int max_of_array( int A[], int size ){
    int i, max;
    //long size = sizeof( A );
    printf( "size: %d\n", size );
    max = A[ 0 ];
    for( i = 1; i < size; i++ ){
        if( A[ i ] > max ) max = A[ i ];
    }
    return max;
}

void array_copy( int dest[], const int src[], int size ){
    int i;
    for( i = size - 1; i >= 0; i-- ) dest[ i ] = src[ i ];
}

void array_copy_reverse( int dest[], const int src[], int size ){
    int i, j;
    for( i = size - 1, j = 0; i >= 0; i--, j++ )
    {
        dest[ j ] = src[ i ];
    }
}

int main(){
    int A[ SIZE ] = { 700, 2, 888, 20, 100, 7 };
    int B[ SIZE ] = { 0 };
    printf( "max: %d\n", max_of_array( A, SIZE ) );
    printf( "max of 1st half: %d\n", max_of_array( A, (SIZE+1) / 2 ) );
    printf( "max of 1st half: %d\n", max_of_array( &A[ 0 ], (SIZE+1) / 2 ) );
    printf( "max of 2nd half: %d\n", max_of_array( &A[ (SIZE+1) / 2 ], SIZE / 2 ) );

    printf( "\narray B: " );
    print_array( B, SIZE );
    // B = A; - NOT ALLOWED
    //array_copy( B, A, SIZE );
    // copy 1st half of A into the 2nd half of B
    // array_copy( &B[ SIZE/2 ], A, SIZE/2 );
    array_copy_reverse( &B[ SIZE/2 ], A, SIZE/2 );
    printf( "\n array B: " );
    print_array( B, SIZE );
    printf( "array A: " );
    print_array( A, SIZE );
}
