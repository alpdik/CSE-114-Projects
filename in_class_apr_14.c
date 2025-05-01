//
// Created by alpdi on 14/04/2025.
//
// 14.4.2025 Monday

#include <stdio.h>
#define SIZE 6

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


int count_new( const int A[], int size, int n ){
    int count = 0, index;
    index = last_index( A, size, n );


    while( index != -1 ){
        count++;
        index = last_index( A, index, n );

    }
    return count;
}

int main(){
    int A[ SIZE ] = { 2, 2, 27, 2, 7, 1 };
    int n = 27;
    printf( "%d appears %d time(s) in A?\n", n, count_new( A, SIZE, n ) );

}






