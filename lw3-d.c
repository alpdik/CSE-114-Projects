#include <stdio.h>

int exponent(int base, int power)
{
   int output;
   output=1;
    for (power;power<0;power--)
    {
        output*=base;

    }
    
    return output;
}

int factorial_even(int number)
{
    int output;
    output=1;
    
    if (number/2==1)
    {
        number-=1;
    }
    
    for(number;number>=2;number-2)
    {
        output=number*output;
    }


    return output;
}

int ave_of_cubes_of_nums_between(int num1, int num2)
{
    int sum,xnum2;
    sum=0;
    xnum2=num2;
    for(num2;num2>=num1;num2-1)
    {
        sum+=num2*num2*num2;
        num2-=1;
    }
    return sum/(xnum2-num1+1);
}

int gcd(int num1, int num2)
{
    int x;

    if (num1<num2)
        {
            x=num1;
        }
    else
        {
            x=num2;
        }
        
    for(x;x>0;x--)
    {
        if(num2%x==0 && num1%x==0)
        {
            return x;
        }
    
    }        
}

int is_perfect_number(int number)
{
    int dvsr,sum;
    dvsr=1;
    sum=0;

    for(dvsr;dvsr<number;dvsr++)
    {
        if(number%dvsr==0)
        {
            sum+=dvsr;
        }
    }
    
    if(sum==number)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int sum_of_digits(int number)
{
    int sum,temp;
    sum=0;

    for(number;number>0;number/=10)
    {
        temp=number%10;
        sum+=temp;
    }

    return sum;
}

int is_prime(int number)
{
    int temp;
    temp=number-1;

    if (number==1)
    {
        return 0;
    }

    for(temp;temp>1;temp--)
    {
        if ((number%temp)==0)
        {
            return 0;
        }
    }

    return 1;
}


int main()
{
    char uchc;
    printf("Please select a operation:\n");
    scanf("%c",&uchc);

    if (uchc=='e')
    {
        int base,power;
        printf("Enter the base: ");
        scanf("%d",&base);
        printf("Enter the power: ");
        scanf("%d",&power);
        printf("%d\n",exponent(base,power));
    }
    else if (uchc=='f')
    {
        int number;
        printf("Enter the number: ");
        scanf("%d",&number);
        printf("%d\n",factorial_even(number));
    }
    else if (uchc=='s')
    {
        int num1,num2;
        printf("Enter the first number: ");
        scanf("%d",&num1);
        printf("Enter the second number: ");
        scanf("%d",&num2);
        printf("%d\n",ave_of_cubes_of_nums_between(num1,num2));
    }
    else if (uchc=='g')
    {
        int num1,num2;
        printf("Enter the first number: ");
        scanf("%d",&num1);
        printf("Enter the second number: ");
        scanf("%d",&num2);
        printf("%d\n",gcd(num1,num2));
    }
    else if (uchc=='p')
    {
        int number;
        printf("Enter the number: ");
        scanf("%d",&number);
        printf("%d\n",is_perfect_number(number));
    }
    else if (uchc=='t')
    {
        int number;
        printf("Enter the number: ");
        scanf("%d",&number);
        printf("%d\n",sum_of_digits(number));
    }
    else if (uchc=='r')
    {
        int number;
        printf("Enter the number: ");
        scanf("%d",&number);
        printf("%d\n",is_prime(number));
    }
    else
    {
        printf("INVALID INPUT\n");
    }


    return 0;
}
