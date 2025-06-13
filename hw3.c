//
// Created by alpdi on 14/04/2025.
//
// 14.4.2025 Monday

#include <stdio.h>
#define SIZE 6

int index_of_first( const int A[], int size, int n, int start ){
    for( int i=start; i < size; i++ ){
        if( A[ i ] == n ){
            return i;
        }
    }
    return -1;
}

int count_with_first( const int A[], int size, int n ){
    int count = 0, index;

    index = index_of_first( A, size, n, 0 );

    while( index != -1 ){
        count++;
        index = index_of_first( A, size-index, n, index + 1 );
    }
    return count;
}

int main(){
    int A[ SIZE ] = { 2, 2, 27, 2, 7, 1 };
    int n = 0;
    printf( "%d appears %d time(s) in A \n", n, count_with_first( A, SIZE, n ) );

}