//
// Created by alpdi on 3/22/2025.
//
#include <stdio.h>

double f1(double princ, int ir)
{
    return princ * ((ir*1.0)/100);
}

double f2(double princ, int ir)
{
    return (f1(princ,ir)+princ) * ((ir*1.0)/100);
}

double f3(double princ, int ir)
{
    return (f2(princ,ir)+f1(princ,ir)+princ) * ((ir*1.0)/100);
}

double i_sum(double princ, int ir, int num_months)
{
    if (num_months==1)
    {
        return f1(princ,ir);
    }
    else if (num_months==2)
    {
        return f2(princ,ir)+f1(princ,ir);
    }
    else if (num_months==3)
    {
        return f3(princ,ir)+f2(princ,ir)+f1(princ,ir);
    }

}

int main()
{
    int ir,num_months;
    double princ;

    printf("Enter the principal amount: $");
    scanf("%lf",&princ);
    printf("Enter the interest rate: ");
    scanf("%d",&ir);
    printf("Enter the number of months: ");
    scanf("%d",&num_months);

    printf("The total amount of interest is: %.2f\n", i_sum(princ,ir,num_months));

    return 0;
}

