#include <stdio.h>

double miles_to_km(double miles);

int main() {
    double miles, km;
    printf("Enter miles: ");
    scanf("%lf", &miles);
    km = miles_to_km(miles);
    printf("%.2f miles is equal to %.2f km\n", miles, km);
    return 0;
}

double miles_to_km(double miles) {
    double constant = 1.60934;
    return miles * constant;
}