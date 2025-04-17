//
// Created by alpdi on 14/04/2025.
//
#include <stdio.h>

void print_array( int A[], int size ) {
    int i;
    for( i = 0; i < size; i++ ) {
        printf( "%d ", A[ i ] );
    }
    printf( "\n" );
}

int main() {

    int i;

    int Exams[ 3 ][ 5 ] = { {50,60},{100,100},{80,90} };
    double Average[ 5 ];

    for( i = 0; i < 2; i++ ){ // for each of the 5 students
        Average[ i ] = Exams[ 0 ][ i ] *0.3 + Exams[ 1 ][ i ]*0.3 + Exams[ 2 ][ i ]*0.4;
    }
    for( i = 0; i < 2; i++ ){
        printf( "avg of %dth std: %.2f\n", i+1, Average[ i ] );
    }

}

