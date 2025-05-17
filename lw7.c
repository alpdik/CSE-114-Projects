/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#define SIZE 5

void strConcat(char *dest, char* str1, char* str2)
{
    int x=0;
    
    
    for(x; *(str1+x)!='\0'; x++)
    {
       *(dest+x)=*(str1+x);
    }
    
    *(dest+x)=' ';
    x++;
    
    for(int y=0; *(str2+y)!=0; y++,x++)
    {
       *(dest+x)=*(str2+y);
    }
}

int isPalindrome( char *str ){

    char *end = str;
  
    while( *end!='\0' )
    {
        end++;
    }
    
    end--;
    
    while( str < end ){
        if( *str != *end ) 
        {
            return 0;
        }
        str++;
        end--;
    }
    return 1;
}

void  removeSpaces(char* str)
{
    int x=0;
    char *dest;
    
    for(x; *(str+x)!='\0'; x++)
    {
       if(*(str+x)!=' ')
       {
        *(dest+x)=*(str+x);
       }
    }
    
    str=dest;
}

int compareIgnoreCase(char* str1, char* str2)
{
    for(int x=0;*(str1+x)=='\0';x++)
    {
        if(*(str1+x)!=*(str2+x))
        {
            if(*(str1+x)+32!=*(str2+x))
            {
                if(*(str1+x)!=*str2+32)
                {
                    if (str1>str2)
                    {
                        return 1;
                
                    }
                    return -1;
                }
            }
        }
    }
    
    return 0;
}


char *concatArray(char* array[], int size)
{
    
}

void  sortArray(char* array[], int size)
{
    char *temp;
    
    for( int i2 = 0; i2 < size-1; i2++ ){
        for( int i = 0; i < size-1; i++ ){
            if(array[i+1] < array[i])
            {
                temp=array[i+1];
                array[i+1]=array[i];
                array[i]=temp;
            
            }

        
        }
    }
}

int main()
{
    char *A[SIZE]={"madam", "hello", "racecar", "world", "civic"};
    
    printf("Palindromes: ");
    for(int x=0;x<SIZE;x++)
    {
        
        if(isPalindrome(A[x])==1)
        {   
            
            for(int y=0; A[x][y]!='\0' ;y++)
            {  
                printf("%c",A[x][y]);
            }
            
            printf(" ");
        }
    }
    printf("\n");

    return 0;
}
