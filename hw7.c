//
// Created by alpdi on 04/06/2025.
//
#include <stdio.h>
#include <stdlib.h>

char *first(char *s1, char *s2)
{
    for (int i = 0,j; s2[i] != '\0'; i++)
    {
        if (s2[i]==s1[0])
        {
            j=0;
            for (int k=i; s1[j]!='\0';j++,k++)
            {
                if (s1[j]!=s2[k])
                {
                    break;
                }
            }
            if (s1[j]=='\0')
            {
                return s2+i;
            }
        }
    }
    return NULL;
}

int count_of_first(char *s1, char *s2)
{
    int count = 0;
    for (;first(s1,s2) != NULL;count++,s2=first(s1,s2)+1);
    return count;
}

void print_counts(char *s1, char *s2)
{
    int how_many_words=count_of_first(" ",s1)+1;

    char *words[how_many_words];
    for (int i=0,w=0,j; s1[i]!='\0';w++,i+=j)
    {
        while (s1[i]==' ')
        {
            i++;
        }

        if (s1[i] == '\0')
        {
            break;
        }

        for (j=0;s1[j+i]!=' ' && s1[j+i]!='\0' ;j++);

        words[w]=malloc(j+1);
        for (int k=0;k<j;k++)
        {
            words[w][k]=s1[i+k];
        }
        words[w][j]='\0';
    }

    for (int i=0;i<how_many_words;i++)
    {
        printf("count of word %d: %d \n",i+1,count_of_first(words[i],s2));
    }

}


int main()
{
    print_counts("ab cd ef", "ab bc a ef bc ab");
    return 0;
}