//
// Created by alpdi on 04/06/2025.
//
#include <stdio.h>



void print_bits( unsigned n,int a , int b ){

    unsigned mask = 1 << a-1;
    for(int count=a-b;count>=0;count-- ,mask >>= 1)
        {
        if( (n & mask)==0 )
        {
            printf( "0" );
        }
        else
        {
            printf( "1" );
        }

    }
}

int main()
{

    print_bits(185,5,2);
    return 0;
}