//
// Created by alpdi on 02/06/2025.
//
#include <stdio.h>
#include <stdlib.h>

int size_of_int_in_bits(){
    unsigned x = ~0, count = 0;
    // x: 1111 1111 1111 1111 1111 1111 1111 1111 1111 1111 1111
    while( x ){
        count++;
        x >>= 1; // x = x >> 1;
    }
    return count;
}

// print an unsigned int bitwise
void print_bits( unsigned n ){
    // n:    0111 xxxx xxxx xxxx xxxx
    // n:    1011 xxxx xxxx xxxx xxxx xxxx
    // mask: 1000 0000 0000 0000 0000 0000
    // and:  0000000000000
    //       100000000000
    unsigned mask = 1 << (size_of_int_in_bits() - 1);
    int count = 0;
    // 0000000..01  shifted left 31 times
    // unsigned mask = 1000 0000 0000 0000 0000 0000 0000 0000
    while( mask ){
        if( n & mask ){
            printf( "1" );
        }
        else{
            printf( "0" );
        }
        mask >>= 1;
        count++;
        if( !(count % 8) ) printf( " " );
    }
}


// count the bits equal to 1 in the binary rep. of an uns. int
int count_set_bits( unsigned n ){
    unsigned mask = 1;
    int count = 0;
    while( mask ){
        if( n & mask ) count++;
        mask <<= 1;
    }
    return count;
}


// n:           0000100010000000
// n-1:         0000100001111111
// n & (n-1):   0000100000000000

// -1:          0000011111111111
int count_set_bits_new( unsigned n ){
    int count = 0;
    while( n ){
        n = n & (n-1);
        count++;
    }
    return count;
}


int main(){
    unsigned a, b, c;
    a = 7;                 // 0..0 0111
    b = 10;                // 0..0 1010

    // bitwise or: a | b : // 0..0 1111

    c = a | b;
    printf( "after OR a: %u b: %u c: %u\n", a, b, c );

    c = a & b;
    printf( "after AND a: %u b: %u c: %u\n", a, b, c );

    c = a ^ b;
    printf( "after XOR a: %u b: %u c: %u\n", a, b, c );

    c = ~c;
    printf( "after NOT a: %u b: %u c: %u\n", a, b, c );
    printf( "\n" );
    print_bits( c );
    printf( "\n" );

    c = a ^ b;
    printf( "after XOR a: %u b: %u c: %u\n", a, b, c );

    c = c << 2;
    printf( "after SL(2) a: %u b: %u c: %u\n", a, b, c );

    c = c >> 1;
    printf( "after SR(1) a: %u b: %u c: %u\n", a, b, c );

    printf( "# of bits of unsigned: %d\n", size_of_int_in_bits() );

    printf( "\n" );
    print_bits( b );
    printf( "\n" );
    printf( "... with %d set bits.\n", count_set_bits( b ) );

    printf( "\n" );
    print_bits( a );
    printf( "\n" );
    printf( "... with %d set bits.\n", count_set_bits_new( a ) );

    a = 500;
    b = 1200;
    printf( "\na: %d:  ", a );
    print_bits( a );
    printf( "\nb: %d: ", b );
    print_bits( b );

    // swap lower order bytes of a and b
    unsigned mask = 1;
    for( int i = 0; i < 8; i++,mask <<= 1 ){
        if( (a&mask) != (b&mask) ){
            // we need to swap
            // complement the bits of both

            // 000000100000000000

            a = a ^ mask; // a ^= mask;
            b = b ^ mask;
        }

    }

    printf( "\na: %d:  ", a );
    print_bits( a );
    printf( "\nb: %d: ", b );
    print_bits( b );


    // swap lower order two bytes of b
    unsigned mask1 = 1, mask2 = 1<<8;
    for( int i = 0; i < 8; i++ ){
        if( ( (b&mask1) == 0 && (b&mask2) != 0 ) ||
            ( (b&mask1) != 0 && (b&mask2) == 0 ) ){
            // we need to complement
            b = b ^ mask1;
            b = b ^ mask2;
        }
        mask1 <<= 1;
        mask2 <<= 1;
    }
    printf( "\nb: %d: ", b );
    print_bits( b );


    // count "1100" in the binary rep. of an unsigned number
    a = strtoul( "110011001100110011001110", NULL, 2 );
    printf( "\na: %u: ", a );
    print_bits( a );
    mask1 = 12 << (size_of_int_in_bits() - 4);
    mask2 = 15 << (size_of_int_in_bits() - 4);
    a <<= 1;
    printf( "\na: %u: ", a );
    print_bits( a );
    int count = 0;
    while( mask1 ){
        if( ((a&mask2) ^ mask1) == 0 ){
            count++;
            mask1 >>= 4;
            mask2 >>= 4;
        }
        else{
            mask1 >>= 1;
            mask2 >>= 1;
        }

    }
    printf( "\n %d \n", count );

}