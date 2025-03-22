#include <stdio.h>

int exponent(int base, int power)
{
   int output;
   output=1;
    while (power>0)
    {
        output*=base;
        power-=1;
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
    
    while(number>=2)
    {
        output=number*output;
        number-=2;
    }
    
    return output;
}

int ave_of_cubes_of_nums_between(int num1, int num2)
{
    int sum;
    sum=0;
    while(num2>=num1)
    {
        sum+=num2*num2*num2;
        num2-=1;
    }
    return sum;
}

int gcd(int num1, int num2)
{
    int temp,x;
    temp=1;
    if (num1<num2)
        {
            x=num1;
        }
    else
        {
            x=num2;
        }
        
    while(x>0)
    {
        if(num2%x==0 && num1%x==0)
        {
            return x;
        }
        else
        {
            x-=1;
        }
    
    }        
}

int is_perfect_number(int number)
{
    int dvsr,sum;
    dvsr=1;
    sum=0;
    
    while (dvsr<number)
    {
        if(number%dvsr==0)
        {
            sum+=dvsr;
        }
        dvsr+=1;
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
    int sum,pot;
    
    sum=0;
    pot=100000;
    
    while(number>0)
    {   
        number/=pot;
        sum+=number;
        pot/=10;
    }
    
    return sum;
}


int main()
{
    int x;
    x=sum_of_digits(123);
    
    printf("%d",x);

    return 0;
}
