#include <stdio.h>

double constant = 1.60934;

double miles_to_km(double miles) {
    return miles * constant;
}

int main() {
    double miles, km;
    printf("Enter miles: ");
    scanf("%lf", &miles);
    km = miles_to_km(miles);
    printf("%.2lf miles is equal to %.2lf km\n", miles, km);
    return 0;
}