//
// Created by alpdi on 2/24/2025.
//
#include <stdio.h>
int is_lower_char(char);
char its_upper_char(char);
int is_upper_char(char c);
char its_lower_char(char c);
char l;


int main()
{
    printf("Enter a character: \n");
    l= getchar();
    if (is_lower_char(l))
    {
        printf("The character is a lower case letter\n");
        printf("The ASCII code of the character is %ld\n",l);
        printf("The upper case of the character is %c\n", its_upper_char(l));
    }
    else
    {
        if (is_upper_char(l))
        {
            printf("The character is an upper case letter\n");
            printf("The ASCII code of the character is %ld\n",l);
            printf("The lower case of the character is %c\n", its_lower_char(l));
        }
        else
        {
            printf("The character is not a etter\n");
            printf("The ASCII code of the character is %ld\n",l);
        }
    }


    return 0;
}

int is_lower_char(char c)
{
    if (c >= 'a' && c <= 'z')
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int is_upper_char(char c)
{
    if (c >= 'A' && c <= 'Z')
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

char its_upper_char(char c)
{
    return (c-'a')+ 'A';
}

char its_lower_char(char c)
{
    return (c-'A')+ 'a';
}



