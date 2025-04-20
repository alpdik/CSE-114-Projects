//
// Created by alpdi on 14/04/2025.
//
// 14.4.2025 Monday

#include <stdio.h>
#define SIZE 6

int index_of_last( const int A[], int size, int n ){
    for( int i = size-1; i >= 0; i-- ){
        if( A[ i ] == n ){
            return i;
        }
    }
    return -1;
}

int count_new( const int A[], int size, int n ){
    int count = 1, index;

    index = size;

    for( count;index != -1;count++ ){
        index = index_of_last( A, index, n );
    }
    return count;
}

int main(){
    int A[ SIZE ] = { 2, 2, 27, 2, 7, 1 };
    int n = 27;
    printf( "%d appears %d time(s) in A?\n", n, count_new( A, SIZE, n ) );

}






