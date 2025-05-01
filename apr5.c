//
// Created by alpdi on 01/05/2025.
//
#include <stdio.h>

int main()
{
    void multiply( int x, int y, int *r ){
        *r = x * y;
    }

    int max_of_array( int *p, int size ){
        int max = *p;
        p++;
        for( int i = 1; i < size; i++ ){
            if( *p > max ) max = *p;
            p++;
        }
        return max;
    }

    // return index of max
    int max_of_array2( int *p, int *q ){ // q points to the element just after last
        int *first = p;
        int *maxp = p;
        for( p++; p < q; p++ ){
            if( *p > *maxp ) maxp = p;
            p++;
        }
        return maxp - first;
    }

    int main() {
        int a = 5, b = 10, result;
        int A[ 3 ] = { 1000, 200, 30 };
        multiply( a, b, &result );
        printf( "result: %d\n", result );
        printf( "max: %d\n", max_of_array2( A, A+3 ) );
    }
}

















