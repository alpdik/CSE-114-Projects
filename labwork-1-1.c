//
// Created by alpdi on 3/6/2025.
//
#include <stdio.h>

float calculate_subtotal(float item_price, int quantity)
{
    return item_price * quantity;
}

float apply_tip(float subtotal, float tip_percentage)
{
    return subtotal*(tip_percentage/100);
}

float calculate_total_bill(float subtotal, float tip)
{
    return subtotal + tip;
}

void display_bill_summary(float subtotal, float tip, float total)
{
    printf("Subtotal: %.2f\n", subtotal);
    printf("Tip: %.2f\n", tip);
    printf("Total: %.2f\n", total);
}

float  calculate_tax(float subtotal, float tax_percentage)
{
    return subtotal *(tax_percentage / 100);
}

float apply_discount (float subtotal, float discount_percentage)
{
    return subtotal*(discount_percentage/100);
}

void display_final_invoice (float subtotal, float tax, float discount, float total)
{
    printf("Subtotal: %.2f\n", subtotal);
    printf("Tax: %.2f\n", tax);
    printf("Discount: %.2f\n", discount);
    printf("Total: %.2f\n", total);
}

int main()
{
    float item_price;
    int quantity;
    float subtotal;
    float tip_percentage;
    float tip;
    float total_bill;
    float tax_percentage;
    float tax;
    float taxed_subtotal;
    float discount;
    float discount_percentage;
    float total;

    printf("Enter the price of the item: ");
    scanf("%f", &item_price);

    printf("Enter the quantity of the item: ");
    scanf("%d", &quantity);

    subtotal= calculate_subtotal(item_price, quantity);

    printf("Enter the tip percentage: ");
    scanf("%f", &tip_percentage);

    tip=apply_tip(subtotal, tip_percentage);

    total_bill=calculate_total_bill(subtotal, tip);

    display_bill_summary(subtotal, tip, total_bill);

    printf("Enter the tax percentage: ");
    scanf("%f", &tax_percentage);

    tax=calculate_tax(subtotal, tax_percentage);

    taxed_subtotal=subtotal+tax;

    printf("Enter the discount percentage: ");
    scanf("%f", &discount_percentage);



    discount=apply_discount(taxed_subtotal, discount_percentage);

    total=total_bill+tax-discount;

    display_final_invoice(subtotal, tax, discount, total);

    return 0;
}