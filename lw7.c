/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#define SIZE 5

void strConcat(char *dest,char* str1, char* str2)
{
    int x=0;
    
    
    for(; *(str1+x)!='\0'; x++)
    {
       *(dest+x)=*(str1+x);
    }
    
    *(dest+x)=' ';
    x++;
    
    for(int y=0; *(str2+y)!='\0'; y++,x++)
    {
       *(dest+x)=*(str2+y);
    }

    *(dest + x) = '\0';
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

void removeSpaces(char *str) {
    int x = 0, y = 0;

    // Remove spaces
    for (;*(str + x)!='\0'; x++)
    {
        if (*(str + x) != ' ')
        {
            *(str + y) = *(str + x);
            y++;
        }
    }

    *(str + y) = '\0';
}

int compareIgnoreCase(char* str1, char* str2,int start)
{
    if (str1[start]=='\0'&&str2[start]=='\0')
    {
        return 0;
    }



    if (str1[start] == str2[start])
    {
        compareIgnoreCase(str1,str2,start+1);
    }
    else if (str1[start]+32 == str2[start])
    {
        compareIgnoreCase(str1,str2,start+1);
    }
    else if (str1[start] == str2[start]+32)
    {
        compareIgnoreCase(str1,str2,start+1);
    }
    else
    {
        if (str1[start] > str2[start])
        {
            return 1;
        }
        return -1;
    }

}


char *concatArray(char* array[])
{
    char *endstring;

    for (int i=0,k=0;array[i]!='\0';i++)
    {
        for (int j=0;array[i][j]!='\0';j++,k++)
        {
            endstring[k]=array[i][j];
        }
    }
    return endstring;
}

void  sortArray(char* array[], int size)
{
    char *temp;

    for( int i2 = 0; i2 < size-1; i2++ ){
        for( int i = 0; i < size-1; i++ ){

            int x=0;

            if (array[i+1][x]==array[i][x])
            {
                for (;array[i+1][x]=='\0' && array[i+1][x]=='\0';x++)
                {
                    if(array[i+1][x]<array[i][x])
                    {
                        return;
                    }
                }
            }
            if(array[i+1][x]<array[i][x])
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


    char nonpali[200]="";
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

        if(isPalindrome(A[x])==0)
        {
            strConcat(nonpali, nonpali, A[x]);
        }

    }
    printf("\n");


    printf("Concatenated Non-Palindromes: %s\n",nonpali);


    char samplestring[6]="a b c";
    removeSpaces(samplestring);
    printf("Space-Free String: %s\n",samplestring);


    printf("Case-Insensitive Comparison: %s vs %s -> Equal (%d)\n","Hello","hello",compareIgnoreCase("Hello","hello",0));

    sortArray(A, SIZE);
    printf("Sorted Array: ");
    for(int x=0;x<SIZE;x++)
    {
        printf("%s ",A[x]);
    }
    printf("\n");

    char concatsorted[200]="";
    for(int x=0;x<SIZE;x++)
    {
        strConcat(concatsorted, concatsorted, A[x]);
    }
    printf("Concatenated Sorted Array: %s\n",concatsorted);


    return 0;
}
