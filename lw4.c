//
// Created by alpdi on 3/28/2025.
//
#include <stdio.h>

void print_hollow_square_pattern(int side)
{
    int empty,height,i,i2,i3;
    empty=side*3-4;
    height=side-2;

    for (i=side;i>0;i--)
    {
        printf("*");
        printf("  ");
    }
    printf("\n");

    for (i2=height;i2>0;i2--)
    {
        printf("*");

        for (i3=empty;i3>0;i3--)
        {
            printf(" ");
        }
        printf("*");
        printf("\n");
    }

    for (i=side;i>0;i--)
    {
        printf("*");
        printf("  ");
    }

}

void print_hollow_triangle_pattern(int height)
{
    int empty,i,i2,i3;
    empty=0;
    printf("*\n");
    for (i=height-2;i>0;i--)
    {
        printf("*");
        for (i2=empty;i2>0;i2--)
        {
            printf(" ");
        }
        printf("*\n");
        empty++;

    }
    for (i3=height;i3>0;i3--)
    {
        printf("*");
    }

}

void print_hollow_diamond_pattern(int height)
{

    int base,base2,i,i2,i3,i4,star,count;

    if (height%2==0)
    {
        printf("The height must be an odd number!");
        return;
    }

    height--;
    base=height+1;
    star=1;
    base2=base;

    for (i=1;i<=base/2;i++)
    {
        printf(" ");
    }

    printf("*");

    printf("\n");
    base=base-2;

    for (base;base>=2;base-=2)
    {
        for (i=1;i<=base/2;i++)
        {
            printf(" ");
        }

        printf("*");
        for (i2=star;i2>0;i2--)
        {
            printf(" ");
        }
        printf("*");


        printf("\n");
        star+=2;
    }

    count=0;

    for (base2;base2>=2;base2-=2)
    {
        for (i3=count;i3>0;i3--)
        {
            printf(" ");
        }

        printf("*");

        for (i4=base2-2;i4>0;i4--)
        {
            printf(" ");
        }

        printf("*\n");

        count++;
    }

    for (i3=count;i3>0;i3--)
    {
        printf(" ");
    }
    printf("*");
    }





void print_hollow_pyramid_pattern(int height)
{
    int base,i,i2,i3,star;
    base=height*2-1;
    star=1;

    for (i=1;i<=base/2;i++)
    {
        printf(" ");
    }

    printf("*");

    printf("\n");
    base=base-2;

    for (base;base>=2;base-=2)
    {
        for (i=1;i<=base/2;i++)
        {
            printf(" ");
        }

        printf("*");
        for (i2=star;i2>0;i2--)
        {
            printf(" ");
        }
        printf("*");


        printf("\n");
        star+=2;
    }
    for (i3=height*2-1;i3>0;i3--)
    {
        printf("*");
    }
}

void print_hollow_rectangle_pattern(int width,int side)
{
    int empty,height,i,i2,i3;
    empty=width*3-4;
    height=side-2;

    for (i=width;i>0;i--)
    {
        printf("*");
        printf("  ");
    }
    printf("\n");

    for (i2=height;i2>0;i2--)
    {
        printf("*");

        for (i3=empty;i3>0;i3--)
        {
            printf(" ");
        }
        printf("*");
        printf("\n");
    }

    for (i=width;i>0;i--)
    {
        printf("*");
        printf("  ");
    }

}




int main()
{
    int height,width;
    char uchc;
    printf("Please select your desired object:\n");
    scanf("%c",&uchc);
    printf("Please enter the height of your desired object: \n");
    scanf("%d",&height);

    if (uchc=='s')
    {
        print_hollow_square_pattern(height);
    }
    else if (uchc=='t')
    {
        print_hollow_triangle_pattern(height);
    }
    else if (uchc=='d')
    {
        print_hollow_diamond_pattern(height);
    }
    else if (uchc=='p')
    {
        print_hollow_pyramid_pattern(height);
    }
    else if (uchc=='r')
    {
        printf("Please enter the width of your desired object: \n");
        scanf("%d",&width);
        print_hollow_rectangle_pattern(width,height);
    }
    else
    {
        printf("Invalid input!");
    }

    return 0;
}