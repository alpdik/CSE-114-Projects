//
// Created by alpdi on 30/05/2025.
//
#include <stdio.h>


int recursiveDigitSum(int number)
{
    int sum = 0;
    if(number>0)
    {
        sum += number%10+recursiveDigitSum(number/10);
    }
    return sum;
}

int find_len(int number)
{
    int len=0;
    if(number>0)
    {
        len+=1+find_len(number/10);
    }
    return len;
}

int recursivePowerCalculation( int base, int exponent)
{

    if(exponent == 0)
    {
        return 1;
    }
    if(exponent>0)
    {
        return base*recursivePowerCalculation(base,exponent-1);
    }
    return base;
}

int recursiveReverse(int number,int output)
{
    int len=find_len(number);
    if(len!=0)
    {
        output=recursiveReverse(number/10,output+(number%10)*recursivePowerCalculation(10,len-1));
    }
    return output;

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

int recursiveGCD(int a,int b)
{
    if (a>b)
    {
        return gcd(a,b,b);
    }
    else
    {
        return gcd(a,b,a);
    }
}

int recursivePrimeCheck(int number,int temp) //temp is: number-1
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
        return recursivePrimeCheck(number,temp-1);
    }

    return 1;

}





int main()
{
    printf("Please enter an integer:");
    int number;
    scanf("%d",&number);
    printf("Sum of the numbers digits is: %d\n",recursiveDigitSum(number));
    printf("Reverse of the number is: %d\n",recursiveReverse(number,0));
    printf("Prime status: %d\n\n",recursivePrimeCheck(number,number-1));
    printf("Please enter the second number:");

    int number2;
    scanf("%d",&number2);
    printf("The GCD of the numbers is: %d\n\n",recursiveGCD(number,number2));

    int base,power;
    printf("Enter the base: ");
    scanf("%d",&base);
    printf("Enter the power: ");
    scanf("%d",&power);
    printf("%d to the power of %d is %d",base,power ,recursivePowerCalculation(base,power));
    return 0;
}
