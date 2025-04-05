//
// Created by alpdi on 3/28/2025.
//
#include <stdio.h>

int main()
{
    int num1,num2;
    printf("Enter two positive integers (first < second): ");
    scanf("%d %d",&num1,&num2);

    if (num1>=num2)
    {
        printf("First number is larger than or equal to the second. Exiting.");
    }
    else if (num1%2==1)
    {
        for (num2;num2>=num1;num2-=2)
        {
            printf("%d\n",num2);
        }
    }
    else
    {
        for (num1;num2>=num1;num1+=2)
        {
            printf("%d\n",num1);
        }
    }



    return 0;
}