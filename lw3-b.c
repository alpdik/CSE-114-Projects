#include <stdio.h>

int exponent(int base, int power,int output)
{
   if (power==0)
   {
       return output;
   }
   else
   {
       return exponent(base,power-1,output*base);
   }
}

int factorial_even(int number,int output)
{

    if (number>=2)
    {
        return factorial_even(number-2,output*number);
    }
    else
    {
        return output;
    }

}

int ave_of_cubes_of_nums_between(int num1, int num2,int sum)
{

    if (num2>=num1)
    {
        return ave_of_cubes_of_nums_between(num1,num2-1,sum+num2*num2*num2);
    }
    else
    {
        return sum;
    }

}

int gcd(int num1, int num2,int x)
{

    if(x>1)
    {
        if(num2%x==0 && num1%x==0)
        {
            return x;
        }
        else
        {
           return gcd(num1,num2,x-1);
        }

    }
    return 1;
}

int is_perfect_number(int number,int dvsr,int sum)
{
    if (dvsr<number)
    {
        if(number%dvsr==0)
        {
            return is_perfect_number(number, dvsr+1,sum+dvsr);
        }
        return is_perfect_number(number, dvsr+1,sum);
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

int sum_of_digits(int number,int sum)
{
    int temp;

    if (number>0)
    {
        temp=number%10;
        return sum_of_digits((number-temp)/10,sum+temp);
    }

    return sum;
}

int is_prime(int number,int temp)
{

    if (number==1)
    {
        return 0;
    }

    if (temp>1)
    {
        if ((number%temp)==0)
        {
            return 0;
        }
        return is_prime(number,temp-1);
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
        printf("%d\n",exponent(base,power,1));
    }
    else if (uchc=='f')
    {
        int number;
        printf("Enter the number: ");
        scanf("%d",&number);
        printf("%d\n",factorial_even(number/2*2,1));
    }
    else if (uchc=='s')
    {
        int num1,num2;
        printf("First number must be smaller than the second number.\n");
        printf("Enter the first number: ");
        scanf("%d",&num1);
        printf("Enter the second number: ");
        scanf("%d",&num2);
        printf("%d\n",ave_of_cubes_of_nums_between(num1,num2,0));
    }
    else if (uchc=='g')
    {
        int num1,num2;
        printf("First number must be smaller than the second number.\n");
        printf("Enter the first number: ");
        scanf("%d",&num1);
        printf("Enter the second number: ");
        scanf("%d",&num2);
        printf("%d\n",gcd(num1,num2,num1));
    }
    else if (uchc=='p')
    {
        int number;
        printf("Enter the number: ");
        scanf("%d",&number);
        printf("%d\n",is_perfect_number(number,1,0));
    }
    else if (uchc=='t')
    {
        int number;
        printf("Enter the number: ");
        scanf("%d",&number);
        printf("%d\n",sum_of_digits(number,0));
    }
    else if (uchc=='r')
    {
        int number;
        printf("Enter the number: ");
        scanf("%d",&number);
        printf("%d\n",is_prime(number,number-1));
    }
    else
    {
        printf("INVALID INPUT\n");
    }


    return 0;
}
