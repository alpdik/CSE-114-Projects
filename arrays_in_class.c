//
// Created by alpdi on 07/04/2025.
//
#include <stdio.h>
#define SIZE 2

int main(){
    float A[ SIZE ] = { 0.0, 2.0 };
    int B[ ] = { 0, 8 };
    int i;
    printf( "size of A: %ld\n", sizeof( A ) / sizeof( float ) );
    printf( "size of B: %ld\n", sizeof( B ) / sizeof( int ) );

    printf( "Array members: \n" );
    for( i = 0; i < SIZE; i++ ){
        printf( "A[ %d ]: %.0f\n", i, A[ i ] );
    }

    A[ 2 ] = 5;
    A[ 4 ] = A[ 2 ];

    printf( "Array members: \n" );
    for( i = 0; i < SIZE; i++ ){
        printf( "A[ %d ]: %d\n", i, A[ i ] );
    }
}