//
// Created by alpdi on 22/05/2025.
//
#include <stdio.h>

int my_str_find(char* str, char* target)
{
    for( int i=0; str[i]!='\0'; i++ ){
        if( str[ i ] == target[0] )
        {
            int j=0;
            for (; target[j]!='\0'; j++)
            {
                if( str[ i+j ] != target[j] )
                {
                    break;
                }
            }
            if (target[j] == '\0')
            {
                return i;
            }

        }
    }
    return -1;
}


int my_str_count(char* str,char c)
{
    int count = 0;
    for( int i=0; str[i]!='\0'; i++ )
    {
        if( str[i] == c )
        {
            count++;
        }
    }
    return count;
}

void my_str_reverse(char *str)
{
    int size=0;
    char temp;

    for(; str[size]!='\0'; size++);



    for (int i=0;i<size/2;i++)
    {
        temp=str[i];
        str[i]=str[size-1-i];
        str[size-1-i]=temp;
    }



}




int main()
{
    char tststr[100]="Hello World, welcome to C Programming!";

    printf("The index of '%s', in '%s' is %d.\n","World",tststr,my_str_find(tststr,"World"));
    printf("The index of '%s', in '%s' is %d.\n\n","Java",tststr,my_str_find(tststr,"Java"));
    printf("There are %d character %c's in the string,\n",my_str_count(tststr,'o'),'o');
    printf("There are %d character %c's in the string,\n\n",my_str_count(tststr,'x'),'x');
    my_str_reverse(tststr);
    printf("The reverse of the string is: '%s'",tststr);

    return 0;
}