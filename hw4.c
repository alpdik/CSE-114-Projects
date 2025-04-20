//
// Created by alpdi on 20/04/2025.
//
#include <stdio.h>

int main()
{
    for (float i=1, j=1; i<=10; i++,j+=0.5)
    {
        for (float i2=i, j2=j; j2<=524288*j; j2*=2, i2+=j2)
        {
            printf("%.0f ",i2);
        }
        printf("\n");
    }
    return 0;
}