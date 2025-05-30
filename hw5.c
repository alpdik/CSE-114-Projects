//
// Created by alpdi on 01/05/2025.
//
#include <stdio.h>
#define SIZE 9

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




int count_in_array(int A[], int size, int n)
{
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (A[i] == n) {
            count++;
        }
    }
    return count;
}
void reverse_array(int A[],int start, int size)
{
    int temp;
    for (int i=start; i < size/2; i++)
    {
        temp = A[i];
        A[i] = A[size-1-i];
        A[size-1-i] = temp;
    }
}

int partial_reverse(int A[], int size, int n)
{
    if (count_in_array(A, size, n)<2)
    {
        return -1;
    }

    int first = first_index(A, size, n);
    int last = last_index(A, size, n);

    if (last-first<=2)
    {
        return 0;
    }

    reverse_array(A, first+1, last+2);
    return 1;

}

void print_array( int A[], int size ){
    int i;
    for( i = 0; i < size; i++ ){
        printf( "%d ", A[ i ] );
    }
    printf( "\n" );
}

void add_after_term(int A[],int size,int term,int n)
{


    for (int i=0;i<size;i++)
    {
        if(A[i]==term)
        {

            for(int j=size; j>i;j--)
            {

                A[j]=A[j-1];
            }
            A[i+1]=n;
            size++;
            i++;
        }
    }
}


int multi_above(int A[],int size,int treshold)
{
    int x,y,count;
    count=0;
    for (int i=0; i < size; i++)
    {
        x=A[i];
        for (int j=i; j < size; j++)
        {
            y=A[j];
            if (x*y<treshold)
            {
                count++;
            }
        }
    }

    return count;

}

int decomp(int A[],int B[],int size)
{
    int k=0;
    B[k]=A[0];
    k++;
    for (int i=1; i < size; i++)
    {

        if (A[i]-A[i-1]!=1)
        {
            B[k]=A[i];
            k++;
        }
    }
    return k;
}



int main()
{
    int A[SIZE]={1,2,3,7,9,10};
    int B[]={};
    char test[]="";
    int newsize=decomp(A,B,6);
    print_array(B,newsize);
    printf("%s\n",test);


    return 0;
}