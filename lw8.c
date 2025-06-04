//
// Created by alpdi on 23/05/2025.
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

void my_str_trim(char* str)
{   
    int count=0;
    for(;str[count]==' ';count++);
    int len=count;
    for(;str[len]!='\0';len++);
	int count2=len-1;
	for(;str[count2]==' ';count2--);
    for(int j=0;j<len-count;j++)
    {
        str[j]=str[j+count];
    }
    str[count2-count+1]='\0';
}

void my_str_join(char** strings, int n, char delimiter,char* output)
{   
    int k=0;
    
    for(int i=0; i<n;i++)
    {
        
        for(int j=0;strings[i][j]!='\0';j++,k++)
        {
           output[k]=strings[i][j];
           
        }
        output[k]=delimiter;
        k++;
        
    }
	output[k-1]='\0';
}

int main()
{
	char tststr[100]="             Hello, my name is Alp Dikmen.                ";
	printf("There are %d character %c's in the string.\n",my_str_count(tststr,'m'),'m');
	printf("The index of %s is %d \n","Dikmen",my_str_find(tststr,"Dikmen"));
	my_str_trim(tststr);
	printf("The trimmed version of the string is: '%s'\n\n",tststr);
	
	char *strings[3]={"Hello","World","!"};
	char merged[50]=
	my_str_join(strings,3,'_',merged);
	printf("%s",merged);
	
	
}

//A[i]==*(A+i)
// A[5]="12345\0"